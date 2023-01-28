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
    int n, p=0, q, r, x, y;
    cin >> n;
    int a[n];
    inputarray(a,n);
    for(int i=n-1;i>=1;i++){
        if(a[i]<a[i-1]){
            p=1;
            break;
        }
        else{
            a[i]=a[i]-a[i-1];
        }
    }     
    printarray(a,n);
    // if(p==1){
    //     cout << "No" << endl;
    // }
    // else{
    // }
  }
}
