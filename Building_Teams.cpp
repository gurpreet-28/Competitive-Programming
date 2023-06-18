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

bool dfs(int node, vector<int>adj[], vector<int>&vis, vector<int>&color, int col){
    vis[node]=true;
    color[node]=col;
    for(auto i: adj[node]){
        if(!vis[i]){
            if(!dfs(i,adj,vis,color,!col)){
                return false;
            }
        }
        else if(vis[i] and color[i]==col){
            return false;
        }
    }
    return true;
}

void solve(){
    int n, m, p=0, q;
    cin >> n >> m;
    vector<int>adj[n+1];

    f(i,0,m){
        int a,b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }    
    vector<int>color(n+1);
    vector<int>vis(n+1,0);
    f(i,1,n+1){
        if(!vis[i]){
            if(!dfs(i,adj,vis,color,0)){
                cout << "IMPOSSIBLE" << endl;
                return;
            }
        }
    }
    f(i,1,n+1){
        cout << color[i]+1 << " ";
    }
    cout << endl;



}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        solve();
    }
}