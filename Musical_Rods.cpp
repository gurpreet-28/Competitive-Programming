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

bool comp(const pair<int,int> &a,const pair<int,int> &b){
    return ((a.first*b.second) > (a.second*b.first));
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
  cin >> t;
  while (t--){
    int n, p,ans=0, k, m=0, q, x, y;
    cin >> n;
    int a[n],b[n];
    inputarray(a,n);
    inputarray(b,n);
    vector<pair<int,int>>v;
    f(i,0,n){
        v.pb(make_pair(a[i],b[i]));
    }    
    sort(v.begin(),v.end(),comp);
    ans=0;
    p=v[0].first;
    f(i,1,n){
        ans+=(p*v[i].second);
        p+=(v[i].first);
    }
    cout << ans << endl;
}
}

