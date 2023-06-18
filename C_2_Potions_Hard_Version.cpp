#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int             long long
#define all(a)          a.begin(),a.end()
#define endl            "\n"
#define fill(a,b) memset(a, b, sizeof(a))
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;
               
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin>>t;
while(t--){
    int i,j,x=0,y=0,p=0,n,q=-1,u=0,v=0,k,m,c=0;
    cin>>n;
    int a[n];
    rep(i,0,n) cin>>a[i];
    priority_queue<int,vector<int>,greater<int>>pq;
    int ans=0;
    for(i=0;i<n;i++){
        c+=a[i];
        pq.push(a[i]);
        while(c<0&&!pq.empty()){
            c-=pq.top();
            pq.pop();
        }
        ans=max(ans,(int)pq.size());
    }
    cout<<ans<<endl;

    }
}