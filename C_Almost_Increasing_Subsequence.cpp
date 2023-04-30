#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

int power(int a, int b, int p){
    if(a==0)
        return 0;
    int res=1;
    a%=p;
    while(b>0){
        if(b&1)
        res=(1ll*res*a)%p;
        b>>=1;
        a=(1ll*a*a)%p;
    }
    return res;
}

int lcm(int a, int b){
    if(a==0 || b==0)
        return 0;
    return (a*b)/__gcd(a,b);
}


signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n >> q;
        if(n<=2){
            while(q--){
                int l,r;
                cin >> l >> r;
                cout << n << endl;
            }
            continue;
        }
        int a[n];
        inputarray(a,n);
        int b[n]={0};
        f(i,2,n){
            if(a[i]<=a[i-1] and a[i-1]<=a[i-2]){
                b[i]=1;
            }
        }
        int pref[n+1]={0};
        f(i,1,n+1){
            pref[i]=pref[i-1]+b[i-1];
        }
        f(i,0,q){
            int l,r;
            cin >> l >> r;
            if(r-l+1<=2){
                cout << r-l+1 << endl;
                continue;
            }
            cout << (r-l+1)-(pref[r]-pref[l+1]) << endl;
        }
    }
}