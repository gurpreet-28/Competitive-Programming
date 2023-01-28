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
        int n, p = 0, ans = 0, i = 0,  m = 1e9 + 7, q, r=1, po=1;
        cin >> n;
        vector<pair<int,int>>v;
        cout << 2 << endl;
        for(int i=n;i>2;i--){
            v.pb(make_pair(i-2,i));
            if(i>3)
                v.pb(make_pair(i-1,i-1));   
        }
        f(i,0,v.size()){
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
}