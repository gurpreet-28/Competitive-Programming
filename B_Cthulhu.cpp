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

int t=0;
void dfs(int node,vector<int>adj[],int vis[]){
    vis[node]=1;
    t++;
    for(auto i: adj[node]){
        if(!vis[i]){
            dfs(i,adj,vis);
        }
    }
}

void solve(){
    int n, m, p=0, q,V;
    cin >> V >> m;
    vector<int>adj[V];
    int vis[V]={0};
    f(i,0,m){
        int x,y;
        cin >> x >> y;
        x--,y--;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(0,adj,vis);
    if(t==V && m==V){
        cout << "FHTAGN!" << endl;
        return;
    }
    cout << "NO" << endl;
}
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
        solve();
    }
}