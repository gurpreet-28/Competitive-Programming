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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases = 1;
    cin >> testcases;
    while (testcases--)
    {
        int n, m, mx, p = 0, q;
        cin >> n >> m;
        int a[n], b[n];
        inputarray(a, n);
        for (int i = 30; i >= 0; i--)
        {
            q = 1;
            p = 0;
            for (int j = 0; j < n; j++)
            {
                int temp = (a[j] & (1 << i));
                q &= temp;
                p |= temp;
            }
            // cout << q << " " << p << "-> ";
            if (q == 0 and p != 0){
                mx = i;
                break;
            }
        }
        q = log2(m) + 1;
        int ans[q];
        int t[q];
        f(i, 0, q){
            t[i] = (m % 2);
            m /= 2;
        }
        fill(ans, ans + q, 1);
        ans[mx] = 0;
        f(i, 0, q){
            if(i>mx){
                ans[i]=1;
            }
            else{
                ans[i] = (ans[i] & t[i]);
            }
        }

        int res = 0;
        f(i, 0, q){
            res += ans[i] * pow(2, i);
        }
        cout << res << endl;
    }
}

