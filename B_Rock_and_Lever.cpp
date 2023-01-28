#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arrsort(a)        sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,p,q=0,r,x=0,y;
    cin >> n;
    int b[n];
    inputarray(b,n);
    arrsort(b);
    reverse(b,b+n);
    int a[n][21]={0};
    f(i,0,n){
        p=b[i];
        f(j,0,21){
            a[i][20-j]=p%2;
            p/=2;
        }
    }
    int ans=0;
    f(i,0,21){
        if(a[0][i]==1){
            p=i;
            break;
        }
    }
    f(i,p,21){
        f(j,0,n){
            if(a[j][i]==1){
                q++;
                f(k,0,21){
                    a[j][k]=0;
                }
            }
        }
        ans+=(q*(q-1))/2;
        q=0;
    }
    cout << ans << endl;
  }
}
