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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, p = 0,k, ans = 0, i = 0,  m = 1e9 + 7, q, r=1, po=1;
        cin >> n >> k;
        int a[n];
        int b[n];
        inputarray(a,n);
        inputarray(b,n);
        vector<pair<int,int>>v;
        f(i,0,n){
            v.pb(make_pair(b[i],a[i]));
        }
        sort(all(v));
        map<int,int>f;
        set<int>s;
        f(i,0,n){
            if(f[v[i].second]==0){
                ans+=v[i].first;
                f[v[i].second]++;
                p++;
            }
            if(p==k){
                break;
            }
        }
        if(p!=k){
            cout << -1 << endl;
        }
        else{
            cout << ans << endl;
        }

    }
}