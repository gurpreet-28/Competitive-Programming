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
int lcm(int a, int b){
    int g=__gcd(a, b);
    return a/g*b;
}
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
        cin >> n >> p;
        vector<int>v;
        while (p != 0)
        {
            q = p % 2; 
            r = (q*po);
            r %= m;
            po*=n;
            po%=m;
            ans += r;
            ans %= m;
            i++;
            p/= 2;
        }
        cout << ans << endl;
    }
}
        