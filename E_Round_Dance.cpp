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

int cy=0;
void dfs(int node,int par, vector<int>adj[],vector<int>&vis){
    vis[node]=1;
    for(auto i: adj[node]){
        if(i!=par){
            if(vis[i]){
                cy=1;
                continue;
            }
            dfs(i,node,adj,vis);
        }
    }
}

void solve(){
    int n, m, p=0, q;
    cin >> n;
    int a[n];
    inputarray(a,n);
    vector<int>adj[n+1];
    map<pair<int,int>,int>mp;
    f(i,0,n){
        if(mp[{i+1,a[i]}]==0){
            adj[i+1].pb(a[i]);
            mp[{i+1,a[i]}]++;
        }

        if(mp[{a[i],i+1}]==0){
            adj[a[i]].pb(i+1);
            mp[{a[i],i+1}]++;
        }
    }

    int mx=0,ans=0;
    vector<int>vis(n+1,0);

    f(i,1,n+1){
        if(!vis[i]){
            mx++;
            cy=0;
            dfs(i,-1,adj,vis);
            if(cy==1){
                ans++;
            }
        }
    }
    cout << min(mx,ans+1) << " " << mx << endl;
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