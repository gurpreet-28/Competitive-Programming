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
    int n, p=0, q, r, j, x, y;
    cin >> n;   
    int a[n],b[n];
    inputarray(a,n);
    f(i,0,n){
        b[i]=a[i];
    }
    arraysort(b);
    int ans[n];
    for(int i=0;i<n;i++){
        if(a[i]==b[n-1]){
            ans[i]=a[i]-b[n-2];
            continue;
        }
        if(a[n-1]==b[n-1]){
            if(i==n-1){
                ans[i]=a[i]-b[n-2];
                break;
            }
        }

        ans[i]=a[i]-b[n-1];
    }
    printarray(ans,n);
  }
}
