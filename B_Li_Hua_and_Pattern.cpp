#include <bits/stdc++.h>
#define int long long
#define f(i, a, b) for (int i = a; i < b; i++)
#define mp make_pair
#define pb push_back
#define rall(a) a.rbegin(), a.rend()
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

void reverseRow(vector<vector<int>> &data,
                int index)
{
    int cols = data[index].size();
    for (int i = 0; i < cols / 2; i++)
    {
        int temp = data[index][i];
        data[index][i] = data[index][cols - i - 1];
        data[index][cols - i - 1] = temp;
    }
}

void rotateMatrix180(vector<vector<int>> &data)
{
    int rows = data.size();
    int cols = data[0].size();

    if (rows % 2 != 0)
    {
        reverseRow(data, data.size() / 2);
    }
    for (int i = 0; i <= (rows / 2) - 1; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int temp = data[i][j];
            data[i][j] = data[rows - i - 1][cols - j - 1];
            data[rows - i - 1][cols - j - 1] = temp;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases = 1;
    cin >> testcases;
    while (testcases--)
    {
        int n, m, p = 0, q, k, ans = 0;
        cin >> n >> k;
        vector<vector<int>> a(n, vector<int>(n, 0));
        vector<vector<int>> b(n, vector<int>(n, 0));
        f(i, 0, n)
        {
            f(j, 0, n)
            {
                cin >> a[i][j];
            }
        }
        b = a;
        rotateMatrix180(b);
        f(i, 0, n / 2)
        {
            f(j, 0, n)
            {
                if (a[i][j] != b[i][j])
                {
                    ans++;
                }
            }
        }
        if (n % 2 == 1)
        {
            p = n / 2;
            f(j, 0, n / 2)
            {
                if (a[p][j] != b[p][j])
                {
                    ans++;
                }
            }
        }
        // cout << ans << endl;
        if (ans > k)
        {
            cout << "NO" << endl;
        }
        else
        {
            p = k - ans;
            if (n % 2 == 1)
                cout << "YES" << endl;
            else
            {
                if (p % 2 == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}