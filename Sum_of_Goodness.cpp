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

int MOD=1e9+7;
const int MAXL=64;

int modInverse(int n,int p){
    return power(n, p - 2, p);
}

int powerm(int a,int b) {
    if(b==0) {
        return 1;
    }
    int curr=a,res=1;
    for(int i=0;i<MAXL;i++) {
        if((1LL<<i)&b) {
            res=(res*curr)%MOD;
        }
        curr=(curr*curr)%MOD;
    }
    return res;
}

vector<int>fac,inv;
int n1=0;

void facm(int x) { //precomputes factorials!
    n1=x;
    fac.resize(n1+1),inv.resize(n1+1); //till fac[n] and inv[n]
    fac[0]=1;
    for(int i=1;i<=n1;i++) {
        fac[i]=(fac[i-1]*i)%MOD;
    }
}

void preinv() { //precomputes inverse! Thanks Aman for that trick! :P
    inv[n1]=powerm(fac[n1],MOD-2);
    for(int i=n1-1;i>=0;i--) {
        inv[i]=(inv[i+1]*(i+1))%MOD;
    }
}

int choose(int a,int b) { //get nCr
    if(a<b) {
        return 0;
    }
    return ((fac[a]*inv[b])%MOD*inv[a-b])%MOD;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    int n1=1e5+1;
    facm(n1);
    preinv();
    while (testcases--){
        int n, m, p=0, q, mod=1e9+7;
        cin >> n;
        int a[n];
        inputarray(a,n);
        sort(a,a+n);
        int ans=0;
        f(i,0,n){
            if(i==a[i]-1){
                ans+=power(2,n-i-1,mod);
            }
            else if(i>=a[i]){
                ans+=choose(i,a[i]-1)*power(2,n-i-1,mod);
            }
            ans%=mod;
        }
        cout << ans << endl;
    }
}
