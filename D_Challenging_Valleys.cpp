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

    if(is_sorted(a,a+n)){
        cout << "YES" << endl;
        continue;
    }
    reverse(a,a+n);
    if(is_sorted(a,a+n)){
        cout << "YES" << endl;
        continue;
    }
    reverse(a,a+n);
    if(a[1]>a[0]){
        cout << "NO" << endl;
        continue;
    }
    f(i,0,n-1){
        if(a[i]>=a[i+1]){
            continue;
        }
        else{
            p=i;
            break;
        }
    }
    vector<int>v;
    f(i,p,n){
        v.pb(a[i]);
    }
    if(is_sorted(all(v))){
        cout << "YES" << endl;
        continue;
    }
    else{
        cout << "NO" << endl;
    }
  }
}
