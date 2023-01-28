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
    int n, p, k, m=0, q, x, y;
    cin >> n;
    if(n==1){
        cout << 2 << endl;
    }
    else if(n==2){
        cout << 3 << endl;
    }
    else if(n==5){
        cout << 1 << endl;
    }
    else{
        cout << n/2 << endl;
    }
    }
}


