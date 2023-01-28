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
    int n, p, k, m=0, q, x, y;
    cin >> n;
    int a[n];
    inputarray(a,n);
    arraysort(a);
    int ans=0;
    p=a[0];
    if(p==1){
        cout << accumulate(a,a+n,-n) << endl;
        continue;
    }
    p*=2;
    p--;
    f(i,0,n){
        ans+=(a[i]-1)/p;
    }
    cout << ans << endl;
    }
}
