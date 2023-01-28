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
    int n, r, p, y, m, o=0, z=0;
    cin >> n;
    // string s;
    // cin >> s;
    int a[n];
    inputarray(a,n);
    vector<int>v;
    
    // if(n%2==1){
        // p=n/2;
        // p--;
    // }
    // else{
        p=n/2;
    // }
    for(int i=0;i<p;i++){
        int x;
        x=a[i]-a[n-1-i];
        v.pb(x);
    }
    f(i,0,v.size()){
        if(v[i]>0){
            o=1;
            break;
        }
    }
    if(o==1){
        cout << -1 << endl;
    }
    else{
    if(v[0]==0 && v[v.size()-1]==0  && is_sorted(all(v))){
        cout << 0 << endl;
        continue;
    }
    if(v[0]<0 && is_sorted(all(v))){
        cout << abs(v[0]) << endl;
    }
    else{
        cout << -1 << endl;
    }
    }
    // printarray(v,v.size());
    }
}