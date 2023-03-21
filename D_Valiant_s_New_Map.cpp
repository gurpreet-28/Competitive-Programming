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

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m, p=0, q;
        int l=1,r=0;
        cin >> n >> m;
        int a[n][m],b[n][m];
        f(i,0,n){
            f(j,0,m){
                cin >> a[i][j]; 
                r=max(r,a[i][j]);
            }
        }
        int ans=1;
        while(l<=r){
            int mid = l + (r-l)/2;
            int maxi=1;
            f(i,0,n){
                f(j,0,m){
                    b[i][j] = (a[i][j]>=mid) ? 1 : 0;
                }
            }
            int dp[n][m];
            f(i,0,n){
                dp[i][0]=b[i][0];
            }
            f(i,0,m){
                dp[0][i]=b[0][i];
            }
            f(i,1,n){
                f(j,1,m){
                    if(b[i][j]==1){
                        dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
                    }
                    else{
                        dp[i][j]=0;
                    }
                    maxi=max(maxi,dp[i][j]);
                }
            }
            if(mid<=maxi){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout << ans << endl;

    }
}