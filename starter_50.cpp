#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, maxi = INT16_MIN;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            maxi = max(a[i], maxi);
        }
        if (maxi <= 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (maxi % x == 0)
                cout << maxi / x << endl;
            else
                cout << maxi / x + 1 << endl;
        }
    }
}