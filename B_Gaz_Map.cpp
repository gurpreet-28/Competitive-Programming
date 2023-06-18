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
    int n, m, p=0, q, a,b,c,d;
    cin >> a >> b >> c >> d;
    double pi = 3.14159265;
    if(a==c and b==d){
        cout << 1.0*(double)0 << endl;
        return;
    }
    if(a==c){
        double ans=0;
        ans=1.0*(double)(abs(b-d));
        cout << fixed << setprecision(6) << ans << endl;
        return;
    }
    
    if(b==d){
        double ans=0.0;
        ans=1.0*(double)abs(a-c);
        cout << fixed << setprecision(6) << ans << endl;
        return;
    }
    double ans=0;
    if(a==0 and d==0){
        b=abs(b);
        c=abs(c);
        ans+=abs(b-c);
        b=min(b,c);
        c=b;
        cout << fixed << setprecision(6) << (0.50*pi*b)+ans << endl;
    }
    else{
        a=abs(a);
        d=abs(d);
        ans+=abs(a-d);
        a=min(a,d);
        d=a;
        cout << fixed << setprecision(6) << (0.50*pi*a)+ans << endl;
    }
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