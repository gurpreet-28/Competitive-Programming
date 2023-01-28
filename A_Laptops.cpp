
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
    int n, p=0,i, q, x, y,d,ps=0,ng=0;
    cin >> n;
    p=n;
    vector<pair<int,int>>v;
    while(p--){
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    sort(all(v));
    reverse(all(v));
    f(i,0,n-1){
        if(v[i].first>v[i+1].first && v[i].second<v[i+1].second){
            p=1;
            break;
        }
    }
    if(p==1){
        cout << "Happy Alex" << endl;
    }
    else{
        cout << "Poor Alex" << endl;
    }
  }
}