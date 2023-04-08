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

int solve(int i, int row, int n, vector<vector<int>> &a, vector<vector<int>> &dp)
{
    if (i == n)
    {
        return 0;
    }
    if (dp[row + 1][i] != -1)
    {
        return dp[row + 1][i];
    }
    if (row == -1)
    {
        return dp[row + 1][i] = max({a[0][i] + solve(i + 1, 0, n, a, dp),
                                     a[1][i] + solve(i + 1, 1, n, a, dp),
                                     solve(i + 1, -1, n, a, dp)});
    }
    else if (row == 0)
    {
        return dp[row + 1][i] = max({a[1][i] + solve(i + 1, 1, n, a, dp),
                                     solve(i + 1, -1, n, a, dp)});
    }
    else
    {
        return dp[row + 1][i] = max({a[0][i] + solve(i + 1, 0, n, a, dp),
                                     solve(i + 1, -1, n, a, dp)});
    }
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
        cin >> n;
        vector<vector<int>> a(2, vector<int>(n));
        f(i, 0, 2)
        {
            f(j, 0, n)
            {
                cin >> a[i][j];
            }
        }
        vector<vector<int>> dp(3, vector<int>(n, -1));
        cout << solve(0, -1, n, a, dp) << endl;
    }
}