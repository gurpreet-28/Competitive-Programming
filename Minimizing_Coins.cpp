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
    int testcases = 1;
    // cin >> testcases;
    while (testcases--)
    {
        int n, m, p = 0, amount,q;
        cin >> n >> amount;
        vector<int> a(n, 0);
        inputarray(a, n);
        sort(all(a));
        vector<int>dp(amount+1,1e8);
        dp[0]=0;
        for (int coin : a) {
            for (int i = 0; i <= amount; i++) {
                if(i>=coin) 
                    if (dp[i - coin] != 1e8) {
                        dp[i] = min(dp[i], dp[i - coin] + 1);
                    }
            }
        }
        int ans=dp[amount];
        if(ans>=1e8){
            cout << -1 << endl;
        }
        else{
            cout << ans << endl;
        }
    }
}