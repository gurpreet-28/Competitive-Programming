#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        // 2000000000
        long long int n, count = 0, j = 0, p, q, i, c = 0, l, g, a, b;
        cin >> n;
        if(n<1000000){
        vector<long long int> g1;
        for (i = 1; i <= sqrt(n / 2); i++)
        {
            p = n - i * i;
            q = sqrt(p);
            if (q * q == p)
            {
                
                g1.push_back(q);
                if(q==i){
                    continue;
                }
                g1.push_back(i);
            }
        }
        count = g1.size();
        i = 0;
        // for(i=0;i<g1.size();i++)
        // cout<<g1[i]<<" ";
        // cout<<endl;
        i = 0;
        while (count--){
            for (j = 1; j <= g1[i]; j++)
            {
                a = j;
                b = g1[i] - j;
                g = __gcd(a, b);
                l = (a * b) / g;
                if (((a + b) * (a + b) + (g - l) * (g - l)) == n && (a > 0 && b > 0)){
                    c++;
                }
            }
            i++;
        }
        q = sqrt(n);
        if (q * q == n)
        {
            c++;
        }
        cout << c << endl;
    }
    else{
        for (i = 1; i <= sqrt(n); i++){
            b = i * i;
            if (n % b == 0){
                g = n / b;
                for (j = 1; j <= sqrt(g); j++){
                    p = 1 + j * j;
                    if (g % p == 0){
                    l = g / p - 1;
                    q = sqrt(l);
                    if (q * q== l)
                    {
                    if ((q != 0 && j != 0) && __gcd(q, j) == 1)
                        c++;
                    }
                    }
                }
            }
        }
        cout << c << endl;
    }
}
}

