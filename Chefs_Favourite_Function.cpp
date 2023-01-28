#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

int funcf(int x){
    if(x==1){
        return 0;
    }
    if(x%2==0){
        return funcf(x/2)+1;
    }
    else{
        return funcf(x/2);
    }
}


int funcg(int x){
    if(x==1){
        return 1;
    }
    if(x%2==0){
        return 2*funcg(x/2)+1;
    }
    else{
        return 2*funcg(x/2);
    }
}

void bin(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m, p=0, q=0;
        cin >> n >> m;
        p=m;
        while(p!=0 && pow(2,q+1)<=m){
            p/=2;
            q++;
        }
        p=pow(2,q);
        // while(p<n){
        //     p+=pow(2,q-1);
        //     q--;
        // }

        if(p>=n){
            cout << funcf(p)+funcg(p) << endl;
            continue;
        }


        int ans=0;
        // cout << p << endl;
        ans = funcf(n)+funcg(n);

        f(i,n,min(m,n+2)){
            // cout << i << "-> ";
            // bin(i);
            // cout << " --> " <<  funcf(i)+funcg(i) << endl;
            ans=max(funcf(i)+funcg(i),ans);
        }
        for(int i=m;i>=max(n,m-2);i--){
            ans=max(funcf(i)+funcg(i),ans);
        }
        cout << ans << endl;
        // cout << endl;
    }
}