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
        int n, p=0, q, r=0,m ,k , j, x, y;
        cin >> n >> k;
        if(n%2==0){
            cout << n+2*k << endl;
            continue;
        }
        vector<int>v;
        f(i,1,sqrt(n)+1){
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
        p=v[1];
        k--;
        q=n+p;
        cout << 2*k+q << endl;
    }
}