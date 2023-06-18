#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a,n)      sort(a,a+n)
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

void dfs(int i,int j,vector<vector<int>>&vis, vector<vector<int>>&grid,int& p,int n,int m){
    if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0 || vis[i][j]){
        return;
    }
    vis[i][j]=1;
    p+=grid[i][j];
    dfs(i+1,j,vis,grid,p,n,m);
    dfs(i,j+1,vis,grid,p,n,m);
    dfs(i,j-1,vis,grid,p,n,m);
    dfs(i-1,j,vis,grid,p,n,m);
}
int solve(vector<vector<int>>& grid) {
    int n=grid.size();
    int m=grid[0].size();
    int ans=0;
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] and grid[i][j]>0){
                int p=0;
                dfs(i,j,vis,grid,p,n,m);
                ans=max(p,ans);
            }
        }
    }
    return ans;
}

void solve(){
    int n, m, p=0, q;
    cin >> n >> m;
    vector<vector<int>>grid(n,vector<int>(m));
    f(i,0,n){
        f(j,0,m){
            cin >> grid[i][j];
        }
    }
    cout << solve(grid) << endl;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        solve();
    }
}