#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p = 0, n, b;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        b = a[0];
        if (n == 1)
        {
            if (a[0] % 2 == 0)
            {
                cout << "CHEFINA" << endl;
            }
            else
            {
                cout << "CHEF" << endl;
            }
        }
        else
        {
            long long int sum = 0;
            if (a[0] == 1)
            {
                cout << "CHEF" << endl;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    sum += a[i] - 2;
                }
                if (sum % 2 == 0)
                {
                    cout << "CHEFINA" << endl;  
                }
                else
                {
                    cout << "CHEF" << endl;
                }
            }
        }
    }
}