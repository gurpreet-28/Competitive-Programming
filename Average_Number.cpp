#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, k, v, d;
        cin >> n >> k >> v;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        d = (v * (n + k) - sum);
        if (d % k != 0 || d <= 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << d / k << endl;
        }
    }
}