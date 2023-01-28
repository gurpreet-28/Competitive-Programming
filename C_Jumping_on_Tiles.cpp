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
    int n, p=0, q, cost=0, r, x=0, y=0;
    string s,w="";
    cin >> s;
    n=s.length();
    int a[n];
    f(i,0,n){
        a[i]=s[i]-'a'+1;
    }
    vector< pair <int,int> >v;
    f(i,0,n){
        v.push_back( make_pair(a[i],i+1));
    }
    p=min(s[0]-'a'+1,s[n-1]-'a'+1);
    q=max(s[0]-'a'+1,s[n-1]-'a'+1);
    // cout << p << " " << q << endl;
    sort(all(v));
    f(i,0,n){
        if(v[i].first==p){
            x=i;
            break;
        }
    }
    f(i,0,n){
        if(v[i].first==q){
            y=i;
        }
    }
    for(int i=x;i<y;i++){
        cost+=abs(v[i].first-v[i+1].first);
    }
    cout << cost << " " << y-x+1 << endl;
    vector<int>f;
    for(int i=x;i<=y;i++){
        f.pb(v[i].second);
    }

    if(f[0]!=1){
        reverse(all(f));
    }
    vector<int>vt;
    vt.pb(1);
    for(int i=0;i<f.size();i++){
        if(f[i]==1 || f[i]==n){
            continue;
        }
        vt.pb(f[i]);
    }
    vt.pb(n);
    printarray(vt,vt.size());
  }
}
