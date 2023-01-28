

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
  cin >> t;
  while (t--){
    int n, k, r, x=0, y, p=-1, z=0, ans=0;
    cin >> n;
    z=n;
    if(n==1){
        cout << 1 << endl;
        continue;
    }
    while(z!=0){
        p++;
        if(z%2==1){
            x++;
        }
        z/=2;
    }
    // cout << x << " " << p << endl;
    cout << fixed << setprecision(0) << max(pow(2,p-1),n+1-pow(2,p)) << endl;
    // cout << ans << endl;
    }
}
