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

int solve(int x, vector<int> &a, vector<int> &dp)
{
    if (x < 0)
    {
        return 1e8;
    }
    if (x == 0)
    {
        return 0;
    }
    if (dp[x] != -1)
    {
        return dp[x];
    }
    int mini = INT_MAX;
    for (auto i : a)
    {
        mini = min(mini, 1 + solve(x - i, a, dp));
    }
    return dp[x] = mini;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases = 1;
    // cin >> testcases;
    while (testcases--)
    {
        int n, m, p = 0, q;
        cin >> n >> m;
        vector<int> a(n, 0);
        inputarray(a, n);
        sort(all(a));
        vector<int> dp(m + 1, -1);
        int ans = solve(m, a, dp);
        if (ans > 1e8 || ans == -1)
        {
            cout << -1 << endl;
        }
        else
            cout << dp[m] << endl;
    }
}