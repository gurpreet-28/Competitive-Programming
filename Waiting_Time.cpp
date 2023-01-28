#include <bits/stdc++.h>
using namespace std;

long long int power(int x, unsigned int y)
{
    long long int mod = 1000000007;
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return ((power(x, y / 2) % mod) * (power(x, y / 2) % mod)) % mod;
    else
        return (x * (power(x, y / 2) % mod) * (power(x, y / 2) % mod)) % mod;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, ans;
        long long int mod = 1000000007;

        cin >> n >> x;

        if (n == 1)
            ans = x;
        else
            ans = (((power(2, n - 2) * x)%mod) * 2)%mod;

        cout << ans << endl;
    }

    return 0;
}