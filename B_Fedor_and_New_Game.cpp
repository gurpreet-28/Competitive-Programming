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
  // cin >> t;
  while (t--){
    int n, p, q=0, r, m, k, ans=0;
    cin >> n >> m >> k;
    int a[m+1];
    inputarray(a,m+1);
    p=a[m];
    f(i,0,m){
      q=0;
      r=p;
      while(max(r,a[i])!=0){
        if((a[i]%2)!=(r%2)){
          q++;
        }
        a[i]/=2;
        r/=2;
      }
      if(q<=k){
        ans++;
      }
    }
    cout << ans << endl;
  }
}
