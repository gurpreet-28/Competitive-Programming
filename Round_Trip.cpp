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

bool dfs(int node,int par, vector<int>adj[],vector<int>&vis,vector<int>&parent,int& sv, int& ev){
    vis[node]=1;
    parent[node]=par;
    for(auto i: adj[node]){
        if(i==par) continue;
        if(vis[i]){
            sv=i;
            ev=node;
            return true;
        }    
        if(!vis[i]){
            if(dfs(i,node,adj,vis,parent,sv,ev)){
                return true;
            }
        }
    }
    return false;
}

void solve(){
    int n, m, p=0;
    cin >> n >> m;
    vector<int>adj[n+1];
    vector<int>vis(n+1,0);
    f(i,0,m){
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }    
    vector<int>parent(n+1,0);
    int sv=-1,ev=-1;
    f(i,1,n+1){
        if(!vis[i]){
            if(dfs(i,-1,adj,vis,parent,sv,ev)){
                break;
            }
        }
    }
    
    if(sv==-1){
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    vector<int>ans;
    int t=ev;
    while(t!=-1){
        ans.pb(t);
        t=parent[t];
    }
    ans.pb(ev);
    cout << ans.size() << endl;
    for(auto k: ans){
        cout << k << " ";
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