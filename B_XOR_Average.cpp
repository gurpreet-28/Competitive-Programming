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
    int n, p=0, q=0, r, x, y;
    cin >> n;
    if(n%2==1){
        f(i,0,n){
            cout << 2 <<  " ";
        }cout << endl;
    }
    else{
        int a[n];
        a[0]=3;
        a[1]=1;
        f(i,2,n){
            a[i]=2;
        }
        printarray(a,n);
    }
    }
}
