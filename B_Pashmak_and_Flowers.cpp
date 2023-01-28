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
//   cin >> t;
  while (t--){
    int n, p=0, q=0, r, x, y;
    cin >> n;
    int a[n];
    inputarray(a,n);
    // arraysort(a);
    x=*max_element(a,a+n);
    y=*min_element(a,a+n);
    // int max=a[n-1]-a[0];
    int max=x-y;
    
    f(i,0,n){
        if(a[i]==y){
            p++;
        }
        if(a[i]==x){
            q++;
        }
    }
    int ways=p*q;
    if(max==0){
        q--;
        ways=(p*q)/2;
    }
    cout << max << " " << ways << endl;;
  }
}
