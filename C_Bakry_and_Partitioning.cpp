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

void dfs2(int node, int par, vector<int>adj[], int a[], int& ct, vector<bool>&dp1){
    int c=0;
    for(auto i: adj[node]){
        if(i!=par){
            dfs2(i,node,adj, a, ct, dp1);
            c+=dp1[i];
        }
    }
    if(c>1){
        ct=1;
    }
}


void dfs1(int node,int par, vector<int>adj[], vector<bool>&dp1, int a[], vector<int>&dp, int xo){
    for(auto i: adj[node]){
        if(i!=par){
            dfs1(i,node,adj,dp1,a,dp, xo);
            dp1[node] = dp1[node] | dp1[i];
        }
    }
    if(dp[node]==xo){
        dp1[node]=true;
    }
}

void dfs(int node, int par, vector<int>adj[], int& xo, int a[], int& ct, vector<int>&dp){
    for(auto i: adj[node]){
        if(i!=par){
            dfs(i,node,adj,xo, a, ct, dp);
            dp[node] ^= dp[i];
        }
    }
    dp[node] ^= a[node];
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m, k, p=0, q, xo=0;
        cin >> n >> k;
        int a[n];
        inputarray(a,n);
        p=n-1;
        f(i,0,n){
            xo^=a[i];
        }
        vector<int>adj[n];
        while(p--){
            int x,y;
            cin >> x >> y;
            x--;
            y--;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        int ct=0;
        if(xo==0){
            cout << "YES" << endl;
            continue;
        }
        if(k==2){
            cout << "NO" << endl;
            continue;
        }
        vector<int>dp(n,0);
        vector<bool>dp1(n,false);
        dfs(0,-1,adj,xo,a,ct,dp);
        dfs1(0,-1,adj,dp1,a,dp,xo);
        dfs2(0,-1,adj,a,ct,dp1);
        // cout << ct << endl;
        p=0;
        f(i,0,n){
            if(dp[i]==0){
                if(dp1[i]){
                    p=1;
                    break;
                }
            }
        }
        if(p==1 || ct==1){
            cout << "YES" << endl;
        }
        else{
            
            cout << "NO" << endl;
        }
    }
}