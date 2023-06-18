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

int MOD=1e9+7;
const int MAXL=64;

int modInverse(int n,int p){
    return power(n, p - 2, p);
}
\
void solve(){
    int n, m, p=0, q,mod=1e9+7;
    cin >> n >> m;
    int a[n];
    inputarray(a,n);
    sort(a,a+n);    
    map<int,int> mp;
    f(i,0,n){
        mp[a[i]]++;
    }
    vector<int>v;
    int i=0;
    int prev=-1;
    for(auto i: mp){
        v.pb(i.first);
    }

    int size=v.size();
    int res=0,ans=0,first=0;

    while(i<size-m+1){
        while(i<size-m+1 and v[i+m-1]==v[i]+m-1){
            if(first==0){
                ans=1;
                f(j,v[i],v[i]+m){
                    ans*=mp[j];
                    ans%=mod;
                }
                res+=ans;
                res%=mod;
                ans*=modInverse(mp[v[i]],mod);
                ans%=mod;
                first=1;

            }
            else{
                ans*=mp[v[i]+m-1];
                ans%=mod;
                res+=ans;
                res%=mod;
                ans*=modInverse(mp[v[i]],mod);
                ans%=mod;
            }
            i++;
        }
        first=0;
        i++;
    }
    cout << res << endl;
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
