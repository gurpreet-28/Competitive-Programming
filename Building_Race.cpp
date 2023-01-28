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

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--){
    double n, p=0,a,b, q, r, j, x, y;
    cin >> a >> b >> x >> y;
    double d,e;
    d=double(a/x);
    e=double(b/y);
    // cout << d << " " << e << endl;
    if(d==e){
        cout << "BOTH" << endl;
        continue;
    }
    if(d>e){
        cout << "CHEFINA" << endl;
    }
    if(d<e){
        cout << "CHEF" << endl;
    }
  }
}
