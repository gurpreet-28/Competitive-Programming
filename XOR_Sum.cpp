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

string bin(int n){
    string s="";
    while(n!=0){
        s+=to_string(n%2);
        n/=2;
    }
    reverse(all(s));
    return s;
}

void solve(){
    int n, m, p=0, q,ans=0;
    cin >> n >> m;
    if(n==0 and (m&(m+1))==0){
        cout << m+1 << endl;
        return;
    }
    if(n==0){
        q=log2(m)+1;
        cout << (int)pow(2,q) << endl;
        return;
    }
    if(n==0){
        ans++;
    }
    p=log2(n)+1;
    q=log2(m)+1;
    p=power(2,p,(int)1e19);
    q=power(2,q,(int)1e19);
    while(p<q){
        ans+=(((2*p-1)-(p^n))+1);
        p*=2;
    }
    cout << ans << endl;
    return;
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