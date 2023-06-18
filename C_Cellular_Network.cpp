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

bool tower(int st, int en, int t[], int m){
    int l=0,r=m-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(st<=t[mid] and t[mid]<=en){
            return true;
        }
        if(t[mid]>en){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return false;
}

bool check(int mid, int a[], int t[], int n, int m){
    int ans=0;
    for(int i=0;i<n;i++){
        int st=a[i]-mid;
        int en=a[i]+mid;
        if(tower(st, en, t, m)){
            ans++;
        }
    }
    if(ans==n){
        return true;
    }
    return false;
}

void solve(){
    int n, m, p=0, q;
    cin >> n >> m;
    int a[n],t[m];
    inputarray(a,n);
    inputarray(t,m);
    int ans=0;
    int l=0,r=2e9;

    r=10;

    while(l<=r){
        int mid=(l+r)/2;
        if(check(mid,a,t,n,m)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
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