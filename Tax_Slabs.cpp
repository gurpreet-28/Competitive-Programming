#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, tax = 0;
        cin >> n;
        if (n <= 250000)
        {
            tax = 0;
        }
        else
        {
            if (n <= 500000)
            {
                tax = ((n - 250000) * 5) / 100;
            }
            else
            {
                if (n <= 750000)
                {
                    tax = ((250000) * 5) / 100 + ((n - 500000) * 10) / 100;
                }
                else
                {
                    if (n <= 1000000)
                    {
                        tax = ((250000) * 5) / 100 + ((250000) * 10) / 100 + ((n - 750000) * 15) / 100;
                    }
                    else
                    {
                        if (n <= 1250000)
                        {
                            tax = ((250000) * 5) / 100 + ((250000) * 10) / 100 + ((250000) * 15) / 100 + ((n - 1000000) * 20) / 100;
                        }
                        else
                        {
                            if (n <= 1500000)
                            {
                                tax = ((250000) * 5) / 100 + ((250000) * 10) / 100 + ((250000) * 15) / 100 + ((250000) * 20) / 100 + ((n - 1250000) * 25) / 100;
                            }
                            else
                            {
                                tax = ((250000) * 5) / 100 + ((250000) * 10) / 100 + ((250000) * 15) / 100 + ((250000) * 20) / 100 + ((250000) * 25) / 100 + ((n - 1500000) * 30) / 100;
                            }
                        }
                    }
                }
            }
        }
        cout << n - tax << endl;
    }
}