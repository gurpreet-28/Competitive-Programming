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
    int n,m, p=0, q, r, j, x, y;
    cin >> n >> x;
    int a[n];
    inputarray(a,n);
    arraysort(a);
    if(a[n-1]<x){
        cout << n+1 << endl;
    }
    else if(a[0]>x){
        cout << n << endl;
    }
    else{
        p=lower_bound(a,a+n,x)-a;
        q=upper_bound(a,a+n,x)-a;
        q--;
        // cout << q << endl;
        if(a[(n-1)/2]==x){
            cout << 0 << endl;
            continue;
        }
        int ans=0;
        if(a[p]==x){
            if(p>(n-1)/2){
                ans=p-(n-p-1);
            }
            else{
                ans=(n-q-q-1);
            }
            if((ans+n-1)/2!=p){
                ans--;
            }
            cout << ans << endl;
        }
        else{
            n++;
            if(p>(n-1)/2){
                ans=p-(n-p-1);
            }
            else{
                ans=(n-p-p-1);
            }
            // cout << p << endl;
            if((ans+n-1)/2!=p){
                ans--;
            }
            cout << ans+1 << endl;
        }
    }
    }
}
// 0 5 10 20 30 40 50