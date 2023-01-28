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
    int n, p=-1, q=0, r, x, y, ans=0;
    cin >> n;
    int a[n];
    inputarray(a,n);
    unordered_map<int,int>f;
    unordered_map<int,int>m;
    vector<int>v;
    f(i,0,n-1){
        if(a[i]!=a[i+1]){
            v.pb(a[i]);
        }
    }
    v.pb(a[n-1]);
    f(i,0,v.size()){
        m[v[i]]=i;
        f[v[i]]++;
    }
    for(int i=v.size()-1;i>0;i--){
        if(v[i]<v[i-1]){
            p=i-1;
            break;
        }
    }
    f(i,0,v.size()){
        if(f[v[i]]>1){
            p=max(p,m[v[i]]);
        }
    }
    set<int>s;
        for(int i=p;i>=0;i--){
            s.insert(v[i]);
        }
        cout << s.size() << endl;
    }
}
