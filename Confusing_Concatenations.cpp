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
    int n, p=0, q, r, x, y;
    cin >> n;
    int a[n],b[n];
    inputarray(a,n);
        int m=INT_MIN;
        f(i,0,n){
            if(a[i]>m){
                m=a[i];
                p=i;
            }
        }
        vector<int>v1;
        vector<int>v2;
        f(i,0,p){
            v1.pb(a[i]);
        }
        f(i,p,n){
            v2.pb(a[i]);
        }
        if(p==0){
        cout << -1 << endl;
        }
        else{
        cout << v1.size() << endl;
        printarray(v1,v1.size());
        cout << v2.size() << endl;
        printarray(v2,v2.size());
        }
    }
}