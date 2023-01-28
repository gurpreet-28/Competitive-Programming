#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ip;
        cin >> n;
        set<int> a1;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a1.insert(a[i]);
        }
        unordered_map<int, int> f;
        for (int i = 0; i < n; i++)
        {
            f[a[i]]++;
        }
        int q = 0;
        set<int>::iterator itr, itr1;
        for (itr = a1.begin(); itr != a1.end(); itr++)
        {
            for (itr1 = a1.begin(); itr1 != a1.end(); itr1++)
            {
                if (f[*itr] == f[*itr1] && *itr != *itr1)
                {
                    q = 1;
                }
                else
                {
                    continue;
                }
            }
        }
        if (q == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            int p = 0;
            vector<int> b;
            unordered_map<int, int> f1;
            b.push_back(a[0]);
            for (int i = 1; i < n; i++)
            {
                if (a[i] != a[i - 1])
                {
                    b.push_back(a[i]);
                }
            }
            for (int i = 0; i < b.size(); i++)
            {
                // cout << b[i] << " ";
                f1[b[i]]++;
            }
            for (int i = 0; i < b.size(); i++)
            {
                if (f1[b[i]] > 1)
                {
                    p = 1;
                    // break;
                }
            }
            if (p == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}