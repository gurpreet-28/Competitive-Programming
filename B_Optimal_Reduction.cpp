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
    int n, p=0, q=0, r=0, x, y;
    cin >> n;
    int a[n];
    inputarray(a,n);
    f(i,0,n-1){
        p+=max(a[i]-a[i+1],0LL);
    }
    p+=a[n-1];
    arraysort(a);
    f(i,0,n-1){
        q+=max(a[i]-a[i+1],0LL);
    }
    q+=a[n-1];
    reverse(a,a+n);
    f(i,0,n-1){
        r+=max(a[i]-a[i+1],0LL);
    }
    r+=a[n-1];
    if(p==r && q==r){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
  }
}
