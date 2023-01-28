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
    int n, p, q=0, r, o=0,e=0, ans=INT_MAX;
    cin >> n;
    int a[n];
    inputarray(a,n);
    f(i,0,n){
      if(a[i]%2==0){
        e++;
      }
    }
    o=n-e;
    if(o>0){
      cout << e << endl;
    }
    else{
      // cout << e << " " << o << endl;
    f(j,0,n){
        q=0;
        while(a[j]!=1){  
            if(a[j]%2==1){
                break;
            }
            q++;
            a[j]/=2;
        }
        ans=min(ans,q);
    }
    // cout << ans << endl;
    cout << ans+e-1 << endl;
  }
  }
}
