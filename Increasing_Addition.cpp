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
    int n, p, k, m=0, q, r, x, y;
    cin >> n >> q;
    int a[n]={0},b[n];
    inputarray(a,n);
    while(q--){
        m=0;
        cin >> x >> y;
        a[x-1]=y;
            f(i,0,n-1){
                m=max(a[i]-a[i+1],m);
            }
            cout << m << endl;
        }
    }
}
