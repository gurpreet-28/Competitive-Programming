#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;

int lcm(int a, int b){
    return ((a*b)/__gcd(a,b));
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
//   cin >> t;
  while (t--){
    int l, d ,v ,g ,r , z, x;
    double a,b,c,t;
    cin >> l >> d >> v >> g >> r;
    t=(double)l/v;
    a=(double)d/v;
    z=g+r;
    if(x%z==0 && (a-x)==0){
        cout << t << endl;
        continue;
    }
    c=a;
    int y=0;
    while(c>=0){
        if(y==0){
            c-=g;
            y=1;
        }
        else{
            c-=r;
            y=0;
        }
    }
    if(y==0){
        t-=(c);
    }
    cout << setprecision(9) << t << endl;
    }
}
