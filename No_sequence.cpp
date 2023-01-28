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

int fun(int x, int y){
    if(y==0){
        return 1LL;
    }
    if(y==1){
        return x;
    }
    int ans=1LL;
    while(y){
        if(y%2){
            ans*=x;
        }
        y=y/2;
        x=x*x;
    }
    return ans;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m, p=0, q , k ,s;
        cin >> n >> k >> s;
        int sum=s;
        int b[n];
        // f(i,0,n){
        //     int m = s%k;
        //     if(m==0 || m==1 || m==k-1){
        //         if(m==1){
        //             b[i]=1;
        //             s-=1;
        //         }
        //         else if(m==k-1){
        //             b[i]=-1;
        //             s+=1;
        //         }
        //         else{
        //             b[i]=0;
        //         }
        //         s/=k;
        //     }
        //     else{
        //         p=1;
        //         break;
        //     }
        // }
        f(i,0,n){
            int rem = (s % k);
            if(rem!=0LL && rem!=1LL) rem = -1LL;
            b[i] = rem;
            s = (s-rem)/k;
        }
        
        int currsum = 0LL;
        
        f(i,0,n){
            currsum += (fun(k,i)*b[i]);
        }
        
        if(currsum==sum){
            f(i,0,n){
                cout<<b[i]<<" ";
            }cout<<"\n";
        }
        else{
            cout<<-2<<"\n";
        }
        
        // if(p==1){
        //     cout << -2 << endl;
        //     continue;
        // }
        // printarray(b,n);
    }
}