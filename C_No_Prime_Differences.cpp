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

bool isprime(int n){
    f(i,2,n){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void solve(){
    int n, m, p=0, q;
    cin >> n >> m;
    vector<vector<int>>v(n,vector<int>(m,0));
    bool flag = false;
    if(!isprime(m)){
        p=1;
        f(i,0,n){
            f(j,0,m){
                v[i][j] = p;
                p++;
            }
        }
    }
    else if(!isprime(n)){
        p=1;
        f(j,0,m){
            f(i,0,n){
                v[i][j] = p;
                p++;
            }
        }
    }
    else if(isprime(n) and isprime(m)){
        p=1;
        f(i,0,n){
            if(i<=n/2){
                p=m*2*i+1;
            }
            else{
                p=v[i-(n/2)][0]-m;
            }
            f(j,0,m){
                v[i][j] = p;
                p++;
            }
        }
    }
    else{
        p=1;
        f(i,0,n){
            f(j,0,m){
                v[i][j] = p;
                p++;
            }
        }
    }
    f(i,0,n){
        f(j,0,m){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


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