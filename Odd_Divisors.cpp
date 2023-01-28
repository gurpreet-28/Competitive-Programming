#include <bits/stdc++.h>
#define int long long
#define f(i, a, b) for (int i = a; i < b; i++)
#define pb push_back
#define all(a) a.begin(), a.end()
#define arraysort(a) sort(a, a + n)
#define endl "\n"
#define inputarray(a, n) \
    f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)                \
    f(i, 0, n) { cout << a[i] << " "; } \
    cout << endl;
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, l, r;
        vector<int> v;
        cin >> l >> r;
        for (int n = l; n <= r; n++)
        {
            vector<int> vect;
            for (int i = 1; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    if (n / i == i)
                        vect.pb(i);
                    else
                    {
                        vect.push_back(i);
                        vect.push_back(n / i);
                    }
                }
            }
            f(i, 0, vect.size())
            {
                if (vect[i] & 1 == 1)
                {
                    v.pb(vect[i]);
                }
            }
            int temp = 0;
            temp = accumulate(v.begin(), v.end(), temp);
            sum += temp;
            // printarray(v,v.size());
            vect.clear();
            v.clear();
        }

        cout << sum << endl;
    }
}