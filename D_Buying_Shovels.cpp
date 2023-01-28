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
    int n, p, q, r, x=INT_MAX, y;
    cin >> p >> q;
    if(p<=q){
        cout << 1 << endl;
    }    
    else{
        n=p;
        vector<int>v;
        for (int i=1; i<=sqrt(n); i++){
            if (n%i == 0){
                if (n/i == i){
                  v.pb(i);
                }
                else{
                    v.pb(i);
                    v.pb(n/i);
                }
            }
        }
        sort(all(v));
        // reverse(all(v));
        f(i,0,v.size()){
            if(v[i]<=q){
                x=min(p/v[i],x);
            }
        }
        cout << x << endl;
    }
    
  }
}
