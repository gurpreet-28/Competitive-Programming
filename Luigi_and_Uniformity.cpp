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
  cin >> t;
  while (t--){
    int n, p=0, q, r, j, g=0, x, y;
    cin >> n;
    int a[n],b[n];
    inputarray(a,n);
    f(i,0,n){
        g=__gcd(g,a[i]);
    }
    int ans=0;
    f(i,0,n){
        if(a[i]!=g){
            ans++;
        }
    }
    cout << ans << endl;
    }
}