#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, e, d, n, m, c;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {   
            if(i<n-1){
            c = (a[i + 1] - a[i]) % m;
            }
            if (i > 1)
            {
            b = (a[i-1] - a[i]) % m;
            }
            e = max(b, c);
            if (e < 0)
            {
                d = a[i] + a[i-1] + (m + e);
            }
            else
            {
                d =  a[i] + a[i-1] + e;
            }
        }
        cout << d << endl;
    }
}