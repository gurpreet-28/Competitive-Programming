#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
#define mp make_pair
using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
  cin >> t;
  while (t--){
    int n, k, p=0, q, r, j, x, y;
    cin >> n >> k;
    int a[n],b[n];
    inputarray(a,n);
    inputarray(b,n);
    int sum=0;
    arraysort(b);
    arraysort(a);
    reverse(b,b+n);
    f(i,0,n){
        if(b[i]>a[i] && k>0){
            sum+=b[i];
            k--;
            continue;;
        }
        sum+=a[i];
    }
    cout << sum << endl;
  }
}