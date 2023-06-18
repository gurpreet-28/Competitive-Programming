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

#define MAXN 1000010
 
// stores smallest prime factor for every number
int spf[MAXN];
 
vector<int>prime;
void sieve(){
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
        spf[i] = i;
 
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;
 
    for (int i = 3; i * i < MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXN; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
    f(i,2,MAXN){
        if(spf[i]==i){
            prime.pb(i);
        }
    }
}

void solve(){
    int n, m, p=0, q;
    cin >> n;
    int ans=1;
    if(n==1){
        cout << 1 << endl;
        return;
    }
    int idx=lower_bound(all(prime),n)-prime.begin();
    if(n<prime[idx]){
        idx--;
    }
    int l=0,r=idx;
    // cout << idx << endl;
    int temp=0;
    while(l<=r){
        int mid = (l+r)/2;
        if((prime[mid]*prime[mid])>n){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    ans+=(idx-l+1);
    cout << ans << endl;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    sieve();
    while (testcases--){
        solve();
    }
}