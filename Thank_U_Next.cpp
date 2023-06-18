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
    int n, m, p=0, k;
    cin >> n >> m >> k;
    int a[k],d[k];
    inputarray(a,k);
    inputarray(d,k);
    vector<int>adj[n+1];
    f(i,0,n){
        int x,y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vector<pair<int,int>>vp;
    f(i,0,k){
        vp.pb({d[i],a[i]});
    }
    sort(all(vp));
    int l=0,r=k-1;
    while(l<=r){
        int mid = (l+r)/2;
        queue<pair<int,int>>q;
        vector<int>vis(n+1,0);
        int v=1;
        vis[vp[mid].second]=1;
        q.push({vp[mid].second,1});
        while(!q.empty()){
            int u = q.front().first;
            int dis = q.front().second;
            if(v==n){
                cout << "YES" << endl;
                return;
            }
            q.pop();
            bool flag = false;
            for(auto e: adj[u]){
                if(!vis[e]){
                    vis[e]=1;
                    v++;
                    if(dis+1>vp[mid].first){
                        flag=true;
                        break;
                    }
                    q.push({e,dis+1});
                }
            }
            if(flag){
                break;
            }
        }
        if(v==n){
            cout << "YES" << endl;
        }
        r=mid-1;
    }
    cout << "NO" << endl;
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