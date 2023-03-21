#include <bits/stdc++.h>
#define int long long
#define f(i, a, b) for (int i = a; i < b; i++)
#define mp make_pair
#define pb push_back
#define all(a) a.begin(), a.end()
#define arraysort(a) sort(a, a + n)
#define endl "\n"
#define inputarray(a, n) \
    f(i, 0, n)           \
    {                    \
        cin >> a[i];     \
    }
#define printarray(a, n)     \
    f(i, 0, n)               \
    {                        \
        cout << a[i] << " "; \
    }                        \
    cout << endl;
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
        int n, m, p = 0, q, mod = 998244353;
        cin >> n >> m;
        int x, y;
        x = n;
        y = m;
        while (x <= y)
        {
            p++;
            x *= 2;
        }
        int l = n, r = m;
        int ans = n;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (mid * pow(2, p - 1) <= m)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (p == 1)
        {
            cout << 1 << " " << m - n + 1 << endl;
            continue;
        }
        int res = 0;
        q = n-1;
        l = n, r = ans;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (mid * pow(2, p - 2) * 3 <= m)
            {
                q = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        q = q - n + 1;
        res = ((p - 1) * q);
        res %= mod;
        res += ans - n + 1;
        res %= mod;
        cout << p << " " << res << endl;
    }
}