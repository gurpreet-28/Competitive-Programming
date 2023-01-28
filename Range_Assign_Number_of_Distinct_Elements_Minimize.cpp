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
    int n, p=0, q=0, r, j, g=0, x, y;
    cin >> n;
    int a[n],b[n];
    inputarray(a,n);
    int k=0;
    p=0;
    f(i,0,n-1){
        if(a[0]==a[i] && a[i+1]==a[n-1]){
            q=1;
            break;
        }
    }
    if(q==1 || a[0]==a[n-1]){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
}