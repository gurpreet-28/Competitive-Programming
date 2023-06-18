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
    queue<int>q;
    vector<int>par(n+1,0);
    q.push(1);
    vis[1]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        if(node==n){
            break;
        }
        for(auto i: adj[node]){
            if(!vis[i]){
                vis[i]=1;
                q.push(i);
                par[i]=node;
            }
        }
    }
    vector<int>ans;
    ans.pb(n);
    int i=n;
    while(par[i]!=0){
        i=par[i];
        ans.pb(i);
    }
    reverse(all(ans));
    if(ans[0]!=1){
        cout << "IMPOSSIBLE" << endl;
        return;
    }
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