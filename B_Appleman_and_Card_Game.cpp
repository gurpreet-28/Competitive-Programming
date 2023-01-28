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
//   cin >> t;
  while (t--){
    int n, p, k, m=0, q, x, y, ans=0;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char,int>f;
    set<char>st;
    f(i,0,n){
        st.insert(s[i]);
        f[s[i]]++;
    }
    vector<pair<int,char>>v;
    for(auto i: st){
        v.pb(make_pair(f[i],i));
        
    }
    sort(all(v));
    reverse(all(v));
    f(i,0,v.size()){
        if(k>0){
            ans+=(min(k,v[i].first)*min(k,v[i].first));
            k-=v[i].first;
        }
        else{
            break;
        }
    }
    cout << ans << endl;

    }
}


