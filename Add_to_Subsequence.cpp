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
    int n, p=0, q, b;
    cin >> n;
    int a[n];
    inputarray(a,n);
    unordered_map<int,int>f;
    f(i,0,n){
        f[a[i]]++;
    }
    f(i,0,n){
        p=max(f[a[i]],p);
    }
    cout << ceil(log(p)/log(2)) << endl;
    }
}
