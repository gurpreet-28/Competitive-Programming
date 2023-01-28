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
  int t = 1;
  //   cin >> t;
  while (t--)
  {
    int a, b, n, p = 0, i, q = 0, x, y, maxi = INT_MIN;
    string s;
    cin >> x;
    y = x;
    map<string, int> v;
    vector<pair<string, int>> str;
    while (x--)
    {
      cin >> s >> n;
      v[s] += n;
      str.push_back(make_pair(s, v[s]));
    }
    for (auto i : v)
    {
      maxi = max(maxi, i.second);
    }
    set<string> se;
    for (auto x : v)
    {
      if (maxi == x.second)
      {
        se.insert(x.first);
      }
    }
    string ans;
    for (auto x : str)
    {
      if (x.second >= maxi && se.count(x.first))
      {
        cout << x.first << endl;
        break;
      }
    }
  }
}
