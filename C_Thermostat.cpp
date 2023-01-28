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
    int n, p=0, q, a, l, b, r, j, x, y;
    cin >> l >> r >> q;
    cin >> a >> b;
    if(a==b){
        cout << 0 << endl;
        continue;
    }
    if(a+q>r && a-q<l || b+q>r && b-q<l){
        cout << -1 << endl;
    }
    else{
        if(b-a>=q){
            cout << 1 << endl;
            continue;
        }
        if(abs(r-a)>=q && abs(r-b)>=q || abs(l-b)>=q && abs(l-a)>=q){
            cout << 2 << endl;
        }
        else{
            cout << 3 << endl;
        }
    }
    
  }
}
