#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;

int solve(int i, int j, int n, vector<vector<int>>a, vector<vector<int>>&dp){
    if(i==n-1 && j==n-1){
        return dp[i][j];
    }
    if(i>=n || j>=n){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j]; 
    }
    return dp[i][j]=a[i][j]+min(solve(i+1,j,n,a,dp),solve(i,j+1,n,a,dp));
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t = 1;
//   cin >> t;
  while (t--)
  {
    int n, k, q = 0, r=0, x, y;
    cin >> n;
    vector<vector<int>>a(n,vector<int>(n));
    vector<vector<int>>c(n,vector<int>(n));
    vector<vector<int>>b(n,vector<int>(n));
    f(i,0,n){
        f(j,0,n){
            cin >> a[i][j];
        }
    }
    f(i,0,n){
        f(j,0,n){
            int x=0,p=a[i][j];
            while(p%2==0){
                x++;
                p/=2;
            }
            b[i][j]=x;
        }
    }
    f(i,0,n){
        f(j,0,n){
            int x=0,p=a[i][j];
            while(p%5==0){
                x++;
                p/=5;
            }
            c[i][j]=x;
        }
    }
    f(i,0,n){
        f(j,0,n){
            a[i][j]=min(b[i][j],c[i][j]);
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    cout << solve(0,0,n,b,dp) << endl;
    vector<vector<int>>dp1(n+1,vector<int>(n+1,-1));
    cout << solve(0,0,n,c,dp1) << endl;
    f(i,0,n+1){
        f(j,0,n+1){
            cout << dp1[i][j] << "\t";
        }
        cout << endl;
    }
    }
}

