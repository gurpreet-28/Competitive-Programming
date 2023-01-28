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
    int n, k, r, x=0, y=0, p=0, z=0, ans=0;
    cin >> n;
    int a[n];
    inputarray(a,n);
    if(n==1){
        cout << 1 << endl;
        continue;
    }
    vector<int>v;
    v.pb(0);
    f(i,1,n-1){
        if(a[i]>a[i+1] && a[i-1]<a[i]){
            v.pb(i);
        }
    }
    v.pb(n-1);
    f(i,0,v.size()-1){
        x=v[i+1]-v[i]+1;
        ans+=((x*(x-1))/2);
    }
    cout << ans + n << endl;

    }
}
