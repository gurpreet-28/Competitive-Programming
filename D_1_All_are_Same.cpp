// https://codeforces.com/problemset/problem/270/A

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
    int n,p=0,i, q=0, x, y,ps=0,ng=0;
    cin >> n;
    int a[n],d[n-1];
    inputarray(a,n);
    int g=0;
    f(i,0,n-1){
        d[i]=abs(a[i]-a[i+1]);
        g=__gcd(d[i],g);
    }
    if(g==0){
        cout << -1 << endl;
        continue;
    }
    cout << g << endl;
    }
}