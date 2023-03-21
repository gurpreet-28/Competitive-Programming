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
    // cin >> t;
    while (t--)
    {
        int n, m, ans = 0, q;
        string s;
        cin >> s;
        n = s.length();

        int p = 0;
        f(i, 0, n)
        {
            if (s[i] == '1')
            {
                p++;
            }
        }
        reverse(all(s));
        s += '0';
        reverse(all(s));

        for (int i = n; i >= 1; i--)
        {
            if (s[i] == '0')
            {
                ans++;
            }
            else if (s[i] == '1')
            {
                ans += 2;
                while (s[i - 1] != '0')
                {
                    ans++;
                    i--;
                }
                s[i - 1] = '1';
            }
        }
        if (p == 1)
        {
            ans -= 2;
        }
        cout << ans << endl;
    }
}