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
    int n, p=-1, q=0,a,b, r, x, y, j, ans=0;
    cin >> a >> b;
    if(b%a==0){
        cout << "YES" << endl;
        continue;
    }
    if(a>(b/2)){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    
  }
}