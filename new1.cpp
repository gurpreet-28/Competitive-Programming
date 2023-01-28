#include <bits/stdc++.h>
#define int long long
#define f(i, a, b) for (int i = a; i < b; i++)
#define pb push_back
#define all(a) a.begin(), a.end()
#define arraysort(a) sort(a, a + n)
#define endl "\n"
#define inputarray(a, n) \
  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)              \
  f(i, 0, n) { cout << a[i] << " "; } \
  cout << endl;
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
    int n, a, b, p, q, r, x = 0, y = 0;
    cin >> a >> b;
    int ar[20];
    int br[20];
    int ans[20] = {0};
    f(i, 0, 20)
    {
      ar[i] = a % 2;
      a /= 2;
      if (br[i] == 1)
      {
        y++;
      }
    }
    f(i, 0, 20)
    {
      br[i] = b % 2;
      b /= 2;
      if (br[i] == 1)
      {
        x++;
      }
    }
    reverse(ar, ar + 20);
    reverse(br, br + 20);
    printarray(ar, 20);
    printarray(br, 20);
if (x <= y)
{
  f(i, 0, 20)
  {
    if (ar[i] == 1)
    {
      ans[i] = 1;
      x--;
    }
  }
  if (x == 0)
  {
    break;
  }
}
else
{
  f(i, 0, 20)
  {
    if (ar[i] == 0)
    {
      continue;
    }
    if (ar[i] == 1 && x>0)
    {
      ans[i] = 1;
      x--;
    }
  }
  if (x > 0)
  {
    for (int i = 19; i >= 0; i--)
    {
      if (ar[i] == 0 && x>0)
      {
        ans[i] = 1;
        x--;
      }
    }
    if (x == 0)
    {
      break;
    }
  }
}
int sum = 0;
printarray(ans, 20);
reverse(ans, ans + 20);
f(i, 0, 20)
{
  sum += (ans[i] * (pow(2, i)));
}
cout << sum << endl;
}
}
