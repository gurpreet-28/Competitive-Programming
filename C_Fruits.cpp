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
  int t = 1;
//   cin >> t;
  while (t--)
  {
    int n,p=0,q,m;
    cin >> n >> m;
    int a[n];
    inputarray(a,n);
    p=m;
    unordered_map<string,int>f;
    vector<string>v;
    while(p--){
        string s;
        cin >> s;
        v.push_back(s);
        f[s]++;
    }
    vector<pair<int,string>>vp;
    for(auto i:f){
        vp.pb(make_pair(i.second,i.first));
    }
    sort(all(vp));
    reverse(all(vp));
    int ans1=0,ans2=0,j=0;
    arraysort(a);
    for(auto i:vp){
        ans1+=(i.first)*a[j];
        j++;
    }
    cout << ans1 << " ";
    reverse(a,a+n);
    j=0;
    for(auto i:vp){
        ans2+=(i.first)*a[j];
        j++;
    }
    cout << ans2 << endl;
  }
}
