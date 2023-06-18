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

bool dfs(int node, int par, vector<int>adj[], vector<int>&vis, vector<int>&parent, int& sv, int& ev){
    vis[node]=1;
    parent[node]=par;
    for(auto i: adj[node]){
        if(i==par) continue;
        if(vis[i]){
            sv=i;
            ev=node;
            return true;
        }
        else{
            if(dfs(i,node,adj,vis,parent,sv,ev)){
                return true;
            }
        }
    }
    return false;
}

void solve(){
    int n, m, p=0, q;
    cin >> n >> m;
    vector<int>adj[n];
    f(i,0,m){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<int>indegree(n,0);
    f(i,0,n){
        for(auto j: adj[i]){
            indegree[j]++;
        }
    }
    vector<int>parent(n,-1);
    int sv=-1,ev=-1;
    f(i,0,n){
        vector<int>vis(n,0);
        if(indegree[i]>=4){
            parent.clear();
            parent.resize(n,-1);
            sv=-1,ev=-1;
            if(dfs(i,-1,adj,vis,parent,sv,ev)){
                break;
            }
        }
    }
    if(sv==-1){
        cout << "NO" << endl;
        return;
    }
    vector<int>cycle;
    int t=ev;
    while(ev!=-1){
        cycle.pb(ev+1);
        ev=parent[ev];
    }
    cycle.pb(t+1);
    vector<pair<int,int>>vp;
    map<pair<int,int>,int>mp;
    for(int i=0;i<cycle.size()-1;i++){
        mp[{cycle[i]-1,cycle[i+1]-1}]=1;
        mp[{cycle[i+1]-1,cycle[i]-1}]=1;
        vp.pb({cycle[i],cycle[i+1]});
    }
    t=0;
    for(auto i: adj[sv]){
        if(t==2){
            break;
        }
        if(mp[{i,sv}]==1 || mp[{sv,i}]==1){
            continue;
        }
        else{
            t++;
            vp.pb({i+1,sv+1});
        }
    }

    cout << vp.size() << endl;
    for(auto i : vp){
        cout << i.first << " " << i.second << endl;
    }

    // printarray(indegree,n);
    // cout << sv << " " << ev << endl;
    // printarray(parent,n);
    



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