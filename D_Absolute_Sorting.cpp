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
  int t = 1;
  cin >> t;
  while (t--)
  {
    int n,p=0,q;
    cin >> n;
    int a[n];
    inputarray(a,n);
    reverse(a,a+n);
    if(is_sorted(a,a+n)){
        cout << a[n-1] << endl;
        continue;
    }
    reverse(a,a+n);
    if(is_sorted(a,a+n)){
        cout << 0 << endl;
        continue;
    }
    f(i,0,n-1){
        if(a[i]>a[i+1]){
            p=a[i]+a[i+1];
            p=(p+1)/2;
        }
    }
    f(i,0,n){
        a[i]=abs(a[i]-p);
    }
    if(is_sorted(a,a+n)){
        cout << p << endl;
    }
    else{
        cout << -1 << endl;
    }

  }
}
