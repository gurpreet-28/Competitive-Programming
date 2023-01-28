#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

void find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n,p=0,q,m;
        cin >> n >> m;
        q=max(n,m);
        n=min(n,m);
        m=q;
        p=n%m;
        q=m%n;
        int a=m-p,b=n-q;
        int d1=m,d2=n;
        int g=__gcd(n,m);
        int x=0,y=0;
        int lcm=(n*m)/g;
        find_any_solution(m,-n,b-a,x,y,g);
        int ans=x*m+a;
        if(ans<0){
            int t1=abs(ans)/lcm;
            t1++;
            ans+=(lcm*t1);
        }
        // cout << ans << endl;
        cout << (3*n*m) - m - n << endl;
    }
}