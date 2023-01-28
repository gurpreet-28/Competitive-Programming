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

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n, p, q, r = 0, m, c = 0;
    cin >> n >> m;
    int a[n], b[m];
    inputarray(a, n);
    inputarray(b, m);
    vector<int> v;
    int suf[n];
    suf[0] = a[0];
    f(i, 1, n)
    {
      suf[i] = suf[i - 1] + a[i];
    }
    f(i, 0, n - 1)
    {
      if (a[i + 1] < a[i])
      {
        a[i + 1] = a[i];
      }
    }
    // printarray(a,n);
    f(i, 0, m)
    {
      int upper = upper_bound(a, a + n, b[i]) - a;
      if (b[i] < a[max(upper - 1, 1LL * 0)])
      {
        cout << 0 << " ";
        continue;
      }
      cout << suf[max(upper - 1, 1LL * 0)] << " ";
    }
    cout << endl;
  }
}