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

bool comp(const vector<int>&a,const vector<int>&b){
      if(a[0]==b[0]){
          return a[1]<b[1];
      }
      return a[0]<b[0];
}


signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t = 1;
  // cin >> t;
  while (t--)
  {
    int n, p = 0, q = 0, r, x, y;
    cin >> n;
    // int a[n];
    // inputarray(a, n);

    vector<vector<int>> a;
    f(i, 0, n)
    {
      vector<int> temp;
      f(i, 0, 3)
      {
        int x;
        cin >> x;
        temp.pb(x);
      }
      a.pb(temp);
    }
    sort(a.begin(),a.end(),comp);
    f(i,0,n){
      cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << endl;
    }
  }
}
