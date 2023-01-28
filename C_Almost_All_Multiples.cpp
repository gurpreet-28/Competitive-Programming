#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 1, n+1) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
  cin >> t;
  while (t--){
    int n,k, p=0, q=0, r, x, y;
    cin >> n >> k;
    int a[n+1]={0};
    if(n%k!=0){
        cout << -1 << endl;
    }
    else{
        iota(a,a+n+1,0);
        a[n]=1;
        a[1]=k;
        while (k < n){
        for (int i = k * 2; i <= n; i += k)
            if (n % i == 0) {
                a[k] = i;
                k = i;
                break;
            }
        }
        printarray(a,n);
    }

  }
}
