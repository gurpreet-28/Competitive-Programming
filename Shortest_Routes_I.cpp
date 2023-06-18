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

void solve(){
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>>adj[n+1];
    f(i,0,m){
        int s,e,w;
        cin >> s >> e >> w;
        adj[s].pb({e,w});
    }    
    vector<int>dist(n+1,1e18);
    dist[1]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({dist[1],1});
    while(!pq.empty()){
        int d=pq.top().first;
        int u=pq.top().second;
        pq.pop();
        if(dist[u]<d) continue;
        for(auto i: adj[u]){
            int v = i.first;
            int c = i.second;
            if(dist[v]<=d+c){
                continue;
            }
            dist[v]=d+c;
            pq.push({dist[v],v});
        }
    }
    f(i,1,n+1){
        cout << dist[i] << " ";
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