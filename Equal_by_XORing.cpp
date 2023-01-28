#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, p, q, s = 0, n, i = 0, count = 0, num = 0;
        cin >> a >> b >> n;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            while (1)
            {
                p = a % 2;
                q = b % 2;
                if (p != q)
                {
                    num += pow(2, i);
                if (num >= n)
                {
                    count++;
                    num = pow(2, i);
                    if (num >= n)
                    {
                        s = 1;
                        break;
                    }
                }
                }
                i++;
                a = a / 2;
                b = b / 2;
                if( a == 0 && b == 0){
                    break;
                }
            }
            if (s == 1)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << count + 1 << endl;
            }
        }
    }
}