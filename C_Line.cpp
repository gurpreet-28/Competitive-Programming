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
    int x,y,c,g;
    cin >> x >> y >> c;
    if(c%__gcd(x,y)!=0){
        cout << -1 << endl;
    }
    else{
        cout << (1*c/__gcd(x,y))*x << " " << (-1*c/__gcd(x,y)) << endl; 
    }
    }
}
