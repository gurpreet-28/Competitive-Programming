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
    int n, p=0, r, j, x=0, y;
    cin >> n;
    double q=1/3;
    p=cbrt(n);
    if(n==1||n==4){
        cout << "NO" << endl;
        continue;
    }
    f(i,1,p+1){
        y=n-pow(i,3);
        int s=cbrt(y);
        if((s*s*s)==y && y!=0){
            // cout << s << " " << i << endl;
            cout << "YES" << endl;
            x=1;
            break;
        }
    }
    if(x==0){
        cout << "NO" << endl;
    }
  }
}
