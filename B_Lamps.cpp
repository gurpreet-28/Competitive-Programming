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

bool mycomp(pair<int,int>&a, pair<int,int>&b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    return a.first<b.first;
}

void solve(){
    int n, m, p=0, q;
    cin >> n;
    vector<pair<int,int>>vp;
    f(i,0,n){
        int x,y;
        cin >> x >> y;
        vp.pb({x,y});
    }
    sort(all(vp),mycomp);
    int ans=0;
    q=0;
    p=vp[0].first;
    map<int,int>mp;
    f(i,0,n){
        if(mp.find(vp[i].first)==mp.end()){
            mp[vp[i].first]=i;
        }
    }
    for(auto i: mp){
        for(int j=i.second;j<min(n,i.first+i.second);j++){
            if(vp[j].first!=i.first){
                break;
            }
            ans+=vp[j].second;
        }
    }
    cout << ans << endl;



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