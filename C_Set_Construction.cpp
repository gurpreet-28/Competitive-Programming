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
    cin >> n;
    vector<string>v;
    f(i,0,n){
        string s;
        cin >> s;
        v.pb(s);
    }    
    vector<set<int>>ans(n);
    f(i,0,n){
        ans[i].insert(i+1);
    }
    vector<int>adj[n];
    vector<int>indegree(n,0);
    f(i,0,n){
        f(j,0,n){
            if(v[i][j]=='1'){
                indegree[j]++;
                adj[i].pb(j);
            }
        }
    }
    vector<int>topo;
    queue<int>q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    vector<bool>vis(n,false);

    for(auto ver: topo){
        for(auto ele : adj[ver]){
            for(auto e: ans[ver]){
                ans[ele].insert(e);
            }
        }
    }
    f(i,0,n){
        cout << ans[i].size() << " ";
        for(auto e : ans[i]){
            cout << e << " ";
        }
        cout << endl;
    }
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