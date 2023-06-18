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
    int n, m, p=0, q;
    cin >> n >> m;
    vector<int>adj[n+1];
    f(i,0,m){
        cin >> p >> q;
        adj[p].pb(q);
        adj[q].pb(p);
    }    
    int indegree[n+1]={0};
    for(int i=1;i<=n;i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }
    map<int,int>mp;
    f(i,1,n+1){
        mp[indegree[i]]++;
    }

    sort(indegree,indegree+n+1);
    int x=indegree[n],y=mp[1];
    y/=x;
    if(mp.size()==3){
        for(auto i: mp){
            if(i.second==1){
                x=i.first;
                break;
            }
        }
        cout << x << " " << mp[1]/x << endl;
    }
    else{
        cout << x << " " << y << endl;  
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