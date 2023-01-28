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
    int n, p;
    cin >> n;
    int a[n];
    inputarray(a,n);
    unordered_map<int,int>f;
    unordered_map<int,int>ff;
    unordered_map<int,int>fl;
    set<int>s;
    f(i,0,n){
        s.insert(a[i]);
        f[a[i]]++;
        fl[a[i]]=i+1;
    }
    f(i,0,n){
        if(ff[a[i]]==0)
            ff[a[i]]=i+1;
    }
    int m=0;
    for(auto i:s){
        m=max(f[i],m);
    }
    s.clear();
    f(i,0,n){
        if(f[a[i]]==m){
            s.insert(a[i]);
            f[a[i]]=0;
        }
    }
    vector<vector<int>>v;
    p=INT_MAX;
    for(auto i:s){
        if((fl[i]-ff[i])<=p){
            p=fl[i]-ff[i];
            v.pb({ff[i],fl[i]});
        }
    }
    cout << v[v.size()-1][0] << " " << v[v.size()-1][1] << endl;
    }
}
