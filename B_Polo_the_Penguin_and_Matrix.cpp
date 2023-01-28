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
  // cin >> t;
    while (t--){
        int n, p=0, q, r=0,m ,k , j, x, y;
        cin >> n >> m >> k;
        int a[n][m];
        vector<int>v;
        f(i,0,n){
            f(j,0,m){
                cin >> a[i][j];
                v.pb(a[i][j]); 
            }
        }
        sort(all(v));
        p=n*m;
        f(i,0,p-1){
            if((v[i+1]-v[i])%k!=0){
                r=1;
                break;
            }
        }
        if(r==1){
            cout << -1 << endl;
            continue;
        }
        int ans=0;
        x=v[v.size()/2];
        f(i,0,p){
            ans+=abs((v[i]-x)/k);
        }
        cout << ans << endl;
    }
}
