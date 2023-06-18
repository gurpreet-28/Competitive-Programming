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
    int a[n],b[n+1]={0};
    inputarray(a,n);
    f(i,0,m){
        int a1,b1;
        cin >> a1 >> b1;
        a1--;
        b[a1]++;
        b[b1]--;
    }
    f(i,1,n+1){
        b[i]+=b[i-1];
    }
    vector<pair<int,int>>vp;
    f(i,0,n){
        vp.pb({b[i],i});
    }
    sort(all(vp));
    reverse(all(vp));
    int ans[n];
    sort(a,a+n);
    reverse(a,a+n);
    int x=0;
    f(i,0,n){
        x+=(vp[i].first*a[i]);
        ans[vp[i].second]=a[i];
    }
    cout << x << endl;
    printarray(ans,n);
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