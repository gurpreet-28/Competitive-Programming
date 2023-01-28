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
  int t=1;
//   cin >> t;
  while (t--){
    int n, p=0, m, q=0, r, j, x=0, y;
    cin >> n >> m; 
    int a[n],b[m],c[m];
    inputarray(a,n);
    inputarray(b,m);
    int g=0;
    f(i,0,n-1){
        g=__gcd(g,abs(a[i]-a[i+1]));
    }
    f(i,0,m){
        c[i]=__gcd(a[0]+b[i],g);
    }
    printarray(c,m);
    }
}