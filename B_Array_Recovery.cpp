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
    int n, p=-1, q=0, r, x, y, ans=0;
    cin >> n;
    int a[n];
    inputarray(a,n);
    int b[n],c[n];
    b[0]=a[0];
    c[0]=a[0];
    f(i,1,n){
        b[i]=a[i]+b[i-1];
        if(a[i]<=c[i-1]){
            c[i]=c[i-1]-a[i];
            continue;
        }
        c[i]=c[i-1]+a[i];
    }
    f(i,0,n){
        if(b[i]!=c[i]){
            p=0;
            break;
        }
    }
    // printarray(c,n);
    // printarray(b,n);
    if(p==-1 && c[n-1]>=0){
        printarray(b,n);
        continue;
    }
    cout << -1 << endl;

  }
}
