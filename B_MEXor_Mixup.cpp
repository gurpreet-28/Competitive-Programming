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
    int n, p=0, m, q, r, x, y;
    cin >> m >> x;
    if (m % 4 == 1){
      p = m - 1;
    }
    else if (m % 4 == 2){
      p = 1;
    }
    else if (m % 4 == 3){
      p = m;
    }
    else{
      p=0;
    }
    // cout << p << endl;
    if (p == x){
      cout << m << '\n';
    }
    else if ((p ^ x) != m){
      cout << m + 1 << endl;
    }
    else{
      cout << m + 2 << endl;
    }
    // cout << endl;
  }
}
