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
//   cin >> t;
    while (t--)
    {
    int n,p=0,q,m,ans=0;
    cin >> n;
    int a[n],b[n],c[n];
    inputarray(a,n);
    b[0]=a[0];
    c[n-1]=a[n-1];
    f(i,1,n){
        b[i]=a[i]+b[i-1];
    }
    for(int i=n-2;i>=0;i--){
        c[i]=a[i]+c[i+1];
    }
    // printarray(b,n);
    // printarray(c,n);
    f(i,0,n-1){
        if(b[i]==c[i+1]){
            ans++;
        }
    }
    cout << ans << endl;
    }
}
