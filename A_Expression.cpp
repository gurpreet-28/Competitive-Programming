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
    int n, l=0,p=0, q, x, y, z;
    n=4;
    cin >> x >> y >> z; 
    int a[n];
    a[0]=x+y+z;
    a[1]=(x+y)*z;
    a[2]=x*(y+z);
    a[3]=x*y*z;
    arraysort(a);
    cout << a[3] << endl;
}
}
