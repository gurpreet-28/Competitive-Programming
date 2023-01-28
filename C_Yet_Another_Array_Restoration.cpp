// https://codeforces.com/problemset/problem/270/A

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
    int n, p=0,i, q, x, y,d,ps=0,ng=0;
    cin >> n >> x >> y;
    vector<int>v;
    p=y-x;
    for(i=n-1;i>=1;i--){
        if(p%i==0){
            d=p/i;
            break;
        }
    }
    // cout << i << endl;
    f(j,0,i+1){
        v.pb(x+j*d);
    }
    q=n-i-1;
    int k=1,z=1;
    while(q--){
        if((v[0]-(k*d))>=1){
            v.pb(v[0]-(k*d));
            k++;
            continue;
        }
        v.pb(y+(z*d));
        z++;
    }
    sort(all(v));
    printarray(v,v.size());
    }
}