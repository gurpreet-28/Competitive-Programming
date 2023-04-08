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

void solve(int i,int j,int n,int m,vector<vector<char>>&grid, vector<vector<int>>&vis){
    if(i<0||i>=n||j<0||j>=m||vis[i][j]==1||grid[i][j]=='#'){
        return;
    }
    vis[i][j]=1;
    solve(i+1,j,n,m,grid,vis);
    solve(i,j-1,n,m,grid,vis);
    solve(i-1,j,n,m,grid,vis);
    solve(i,j+1,n,m,grid,vis);
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        int n, m,ans=0;
        cin >> n >> m;
        vector<vector<char>>grid(n,vector<char>(m));
        vector<vector<int>>vis(n,vector<int>(m,0));
        f(i,0,n){
            f(j,0,m){
                cin >> grid[i][j];
            }
        }
        f(i,0,n){
            f(j,0,m){
                if(!vis[i][j] and grid[i][j]!='#'){
                    ans++;
                    solve(i,j,n,m,grid,vis);
                }
            }
        }
        cout << ans << endl;
    }
}