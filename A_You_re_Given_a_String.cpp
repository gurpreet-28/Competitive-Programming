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
    // cin >> t;
    while (t--)
    {
        int n, ans = 0;
        string s;
        cin >> s;
        n = s.length();
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j >= i; j--)
            {
                string x;
                x=s.substr(i,j+1);
                if(s.find(x,i+1)!=-1){
                    ans=max(ans,j-i+1);
                }
            }
        }
        cout << ans << endl;
    }
}

