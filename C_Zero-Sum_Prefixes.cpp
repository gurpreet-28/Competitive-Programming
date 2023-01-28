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
    int n, p=0, ans=0, q=0, r, j, x, y;
    cin >> n;
    int a[n],d[n];
    inputarray(a,n);
    d[0]=a[0];
    vector<int>v;
    if(a[0]==0 ){
        ans++;
    }
    f(i,1,n){
        if(a[i]==0){
            v.pb(i);
            q=1;
        }
        d[i]=a[i]+d[i-1];
        if(q==0){
            if(d[i]==0){
                ans++;
            }
        }
    }
    if(a[n-1]!=0)
        v.pb(n);
    else{
        ans++;
    }
    int k=0;
    while(k<v.size()-1){
        unordered_map<int,int>f;
        p=0;
        for(int i=v[k];i<v[k+1];i++){
            f[d[i]]++;
            p=max(p,f[d[i]]);
        }
        ans+=p;
        k++;
    }
    cout << ans << endl;
  }
}