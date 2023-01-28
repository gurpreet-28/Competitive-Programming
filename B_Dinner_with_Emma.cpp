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
    // cin >> t;
    while (t--)
    {
        int n, m, p = 0;
        cin >> n >> m;
        int a[n][m];
        vector<int>ans;
        f(i,0,n){
            vector<int>v;
            f(j,0,m){
                cin >> a[i][j];
                v.push_back(a[i][j]);
            }
            ans.pb(*min_element(all(v)));
        }
        cout << *max_element(all(ans)) << endl;
    }
}
