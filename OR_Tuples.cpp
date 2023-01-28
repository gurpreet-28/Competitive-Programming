#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,15,n){cout << a[i] << " ";}cout << endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,p,q,r,x=0,y;
    cin >> p >> q >> r;
    int a[21],b[21],c[21];
    f(i,0,21){
        a[20-i]=p%2;
        p/=2;
    }
    f(i,0,21){
        b[20-i]=q%2;
        q/=2;
    }
    f(i,0,21){
        c[20-i]=r%2;
        r/=2;
    }
    int an[21],bn[21],cn[21],ans=1;
    for(int i=20;i>=0;i--){
        if(a[i]+b[i]+c[i]==1){
            ans*=0;
            break;
        }
        if(a[i]==1&&b[i]==1&&c[i]==1){
            ans*=4;
        }
    }
    // if(x==1){
    //     cout << 0 << endl;
    // }
    // else{
    //     f(i,0,21){
    //         if(an[i]==-1){
    //             x++;
    //         }
    //     }
    //     if(x==0){
    //         cout << 1 << endl;
    //     }
    //     else{
    //         cout << 4*x << endl;
    //     }
    // }
    cout << ans << endl;

  }
}