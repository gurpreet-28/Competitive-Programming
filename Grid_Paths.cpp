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
    int n, m, p=0, mod=1e9+7;
    cin >> n;
    vector<vector<char>>v(n,vector<char>(n));
    f(i,0,n){
        f(j,0,n){
            cin >> v[i][j];
        }
    }    
    vector<vector<int>>dp(n,vector<int>(n,0));
    if(v[0][0]=='*'){
        cout << 0 << endl;
        return;
    }
    dp[0][0]=1;
    f(i,0,n){
        f(j,0,n){
            if(i==0 and j==0) continue;
            if(v[i][j]=='*') continue;
            int up=0,left=0;
            if(i-1>=0){
                up=dp[i-1][j];
            }
            if(j-1>=0){
                left=dp[i][j-1];
            }
            dp[i][j]=(up+left)%mod;
        }
    }
    cout << dp[n-1][n-1] << endl;
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