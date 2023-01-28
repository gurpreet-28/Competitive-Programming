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
    int n, p=-1, q, k, r, j, x, y;
    cin >> n >> k;
    int a[n],b[n];
    inputarray(a,n);
    f(i,0,n){
        if(a[i]==k){
            p=i;
            break;
        }
    }
    if(p==-1){
        cout << "No" << endl;
    }
    else{
        if(p==n-1 && n!=1){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
  }
}