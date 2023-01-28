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
    int n, p, q, r, g , k, x=0, y;
    cin >> n >> k;
    int a[n];
    inputarray(a,n);
    g=__gcd(a[0],a[1]);
    f(i,2,n){
        g=__gcd(g,a[i]);
    }
    // cout << g << endl;
    p=g*k;
    int i=0,j=0;
    r=a[0];
    f(j,0,n){
        r=__gcd(r,a[j]);
        if(r==g){
            x++;
            if(j<n-1){
                r=a[j+1];
        }
        }
        // cout << i << " " << j << endl;
        if(j==n){
            break;
        }
    }
    // cout << p << " " << k << endl;
    if(x>=k){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
  }
}
