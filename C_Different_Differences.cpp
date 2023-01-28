#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m, p = 0, q = 1;
        cin >> n >> m;
        int a[n];
        if (n == m)
        {
            iota(a, a + n, 1);
            printarray(a, n);
            continue;
        }
        for (int i = 1; i <= n; i++)
        {
            q = min(m + i - n, q + p);
            a[i - 1] = q;
            p++;
        }
        printarray(a, n);
    }
}
