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
    int n, p=0,q, r, x, y, ans=0;
    cin >> n;
    int a[n],b[n],c[n];
    inputarray(a,n);
    inputarray(b,n);
    f(i,0,n){
        c[i]=a[i]-b[i];
    }
    arraysort(c);
    int i=0,j=n-1;
    if(n%2==1){
        j--;
    }
    // printarray(c,n);
    while(i<j){
        p+=c[i]+c[j];
        // cout << p << " ";
        if(p<=0){
            p=0;
            ans++;
            i++;
            j--;
        }
        else{
            p-=(c[j]+c[i]);
            j--;
        }
    }
    cout << ans << endl;
  }
}
