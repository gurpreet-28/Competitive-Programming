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

void dfs(int node, int par, vector<int>adj[], map<pair<int,int>,int>& mp, int p, int &ans){
    for(auto it : adj[node]){
        if(it!=par){
            if(mp[{it,node}]<mp[{node,par}]){
                ans=max(p,ans);
                dfs(it,node,adj,mp,p+1,ans);
            }
            else{
                dfs(it,node,adj,mp,p,ans);
            }
        }
    }
}

void solve(){
    int n, m, p=0;
    cin >> n;
    int ans=0;
    map<pair<int,int>,int>mp;
    vector<int>adj[n+1];
    f(i,0,n-1){
        int x,y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
        mp[{x,y}]=i;
        mp[{y,x}]=i;
    }
    vector<int>v1;
    for(auto it: adj[1]){
        v1.pb(it);
    }
    for(auto i: v1){
        int p=1;
        dfs(i,1,adj,mp,p,ans);
    }
    cout << ans+1 << endl;
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
