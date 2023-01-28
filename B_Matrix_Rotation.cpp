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
  int t = 1;
  cin >> t;
  while (t--)
  {
    int n;
    int a[4],b[4],c[4],d[4];
    inputarray(a,4);
    if((a[0]>a[1] && a[2]<a[3]) || (a[0]<a[1] && a[2]>a[3])){
        cout << "NO" << endl;
    }
    else{
        if((a[0]>a[2] && a[1]<a[3]) || (a[0]<a[2] && a[1]>a[3])){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

  }
}
