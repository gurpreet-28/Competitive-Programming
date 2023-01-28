#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
#define gcd(a,b)          __gcd(a,b)
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
        int n, p = 0, ans = 0, m;
        cin >> n;
        int a[n];
        inputarray(a, n);
        for (int i = 0; i < n; i += 2){
            ans = gcd(ans, a[i]);
        }
        for (int i = 1; i < n; i += 2){
            if (a[i] % ans == 0){
                p = 1;
                break;
            }
        }
        if (p == 0){
            cout << ans << endl;
        }
        else{
            p = 0;
            ans = 0;
            for (int i = 1; i < n; i += 2){
                ans = gcd(ans, a[i]);
            }
            for (int i = 0; i < n; i += 2){
                if (a[i] % ans == 0){
                    p = 1;
                    break;
                }
            }
            if (p == 0){
                cout << ans << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
    }
}