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
    int n, p=0,cost=0, q, r, j, x, y,a,b,c;
    int ar[4]={0};
    cin >> ar[0] >> ar[1] >> ar[2] >> ar[3];
    arraysort(ar);
    printarray(ar,4)
    c=ar[3]-ar[0];
    b=ar[2]-c;
    a=ar[3]-ar[2];
    cout << a << " " << b << " " << c << endl;
  }
}
