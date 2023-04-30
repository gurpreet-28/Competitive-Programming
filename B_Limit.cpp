#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
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
    n++;
    m++;
    int a[n],b[m];
    inputarray(a,n);
    inputarray(b,m);
    if(n!=m){
        if(n>m){
            if((a[0]>0 and b[0]>0) or (a[0]<0 and b[0]<0))
                cout << "Infinity" << endl;
            else
                cout << "-Infinity" << endl;
        }
        else{
            cout << 0 << "/" << 1 << endl;
        }
    }
    else{
        int x=a[0];
        int y=b[0];
        if(y<0){
            y=-y;
            x=-x;
        }
        cout << x/__gcd(abs(x),abs(y)) << "/" << y/__gcd(abs(x),abs(y)) << endl;
    }
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
