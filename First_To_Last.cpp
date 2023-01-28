#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

int solve(int i,int j,vector<vector<int>>&a,vector<vector<int>>&dp,vector<vector<bool>>&vis){
    if(i==0 && j==0){
        return dp[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int x=INT_MAX,y=INT_MAX,z=INT_MAX;
    if(vis[i][j]){
        y=a[i][j]+solve(i-1,j-1,a,dp,vis);
    }
        x=a[i][j]+solve(i-1,j,a,dp,vis);
        z=a[i][j]+solve(i,j-1,a,dp,vis);
    return dp[i][j]=min(x,min(y,z));
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n,p=0,q,k,m;
        cin >> n >> m >> k;
        vector<vector<int>>a(n,vector<int>(m,1)); 
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        f(i,0,k){
            int x,y;
            cin >> x >> y;
            x--;
            y--;
            vis[x][y]=true;
        }
        cout << solve(n-1,m-1,a,dp,vis) << endl;
    }
}