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
    int n, k, p=0, q, mod=1e9+7;
    cin >> n >> k;
    int a[n];
    inputarray(a,n);
    vector<pair<int,int>>vp;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    f(i,0,n){
        vp.pb({a[i],i});
        pq.push({a[i],i});
    }
    sort(all(vp));
    int size = 1;
    int st=vp[0].first;
    int i=1,j=1;
    for(;j<n;j++){
        if((vp[j].first-st)*j>k){
            break;
        }
        else{
            k-=(vp[j].first-st)*j;
            st=vp[j].first;
        }
    }
    p=k/j;
    k%=j;
    f(i,0,j){            
        vp[i].first = st+p;
        if(k>0){
            vp[i].first++;
            k--;
        }
    }
    f(i,0,n){
        a[i]=vp[i].first;
    }
    p=0;
    f(i,0,n){
        p+=a[i];
        p%=mod;
    }
    int ans=0;
    f(i,0,n-1){
        p-=a[i];
        p+=mod;
        p%=mod;
        ans+=(a[i]*p);
        ans%=mod;
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