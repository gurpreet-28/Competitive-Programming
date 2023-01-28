#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n;
    cin >> n;
    vector<int>v;
    int p=sqrt(n);
    p++;
    f(i,1,p){
        if(n%i==0){
            if(i*i==n){
                v.pb(i);
            }
            else{
                v.pb(i);
                v.pb(n/i);
            }
        }
    }
    sort(all(v));
    // cout << v.size() << endl;
    if(v.size()<=3){
        cout << -1 << endl;
    }
    else{
        cout << 1 << " " << v[1] << " " << v[v.size()-2] << endl;
    }
  }
}