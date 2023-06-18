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

int modInverse(int n,int p){
    return power(n, p - 2, p);
}


void solve(){
    int n, m, p=0, q, mod=1e9+7;
    cin >> n >> m;
    vector<int>prime;
    int r=sqrt(n);
    for(int i=2;i<=r;i++){
        if(n%i==0){
            prime.pb(i);
            while(n%i==0){
                n/=i;
            }
        }
    }   
    if(n!=1){
        prime.pb(n);
    }
    int ans=1;
    // printarray(prime,prime.size());
    for(auto j: prime){
        int k=0;
        int p=j;
        while(p<=m){
            k+=(m/p);
            string s1=to_string(p);
            string s2=to_string(j);
            int z=s1.size()+s2.size();
            if(z>19){
                break;
            }
            p*=j;
        }
        int temp = power(j,k,mod);
        temp%=mod;
        ans*=temp;
        ans%=mod;
    }
    cout << ans << endl;

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