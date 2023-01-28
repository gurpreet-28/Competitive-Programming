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
    int n, p=0, q, r, j, g=0, x, y;
    cin >> n;
    n*=2;
    int a[n],b[n];
    inputarray(a,n);
    set<int>s;
    map<int,int>m;
    f(i,0,n){
        m[a[i]]++;
        s.insert(a[i]);
    }
    int maxi=INT_MIN;
    for(auto i: s){
        maxi=max(maxi,m[i]);
    }
    q=n-maxi;
    p=maxi-q;
    p/=2;
    if(p<=q+1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
}