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
    int n, p=1,ans=0, q=0, r, x, y;
    cin >> n;
    int a[n];
    inputarray(a,n);
    f(i,0,n-1){
        if(a[i]<a[i+1]){
            p++;
        }
        else{
            ans=max(p,ans);
            p=1;
        }
    }
    ans=max(p,ans);
    cout << ans << endl;
    }
}
