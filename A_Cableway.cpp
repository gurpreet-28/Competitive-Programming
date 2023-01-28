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
        int n, p = 0,k, ans = 0, i = 0,  m = 1e9 + 7, q=0, r=1, po=1;
        n=3;
        int a[n];
        inputarray(a,n);
        ans = 30;
        m=*max_element(a,a+n);
        ans=(((a[0]+1)/2)-1)*3+30;
        ans=max(ans,(((a[1]+1)/2)-1)*3+31);
        ans=max(ans,(((a[2]+1)/2)-1)*3+32);
        cout << ans << endl;
    }
}