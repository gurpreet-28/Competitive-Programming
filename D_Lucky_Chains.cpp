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
        int n, p = 0, ans = 0, m, g;
        cin >> n >> m;
        if(gcd(n,m)>1){
            cout << 0 << endl;
            continue;
        }
        if(abs(n-m)==1){
            cout << -1 << endl;
            continue;
        }
        // while(gcd(n,m)==1){
        //     ans++;
        //     n++;
        //     m++;
        // }
        f(i,2,1e7){
            if(abs(n-m)%i==0){
                g=i;
                break;
            }
        }
        p=n/g;
        p++;
        ans=p*g;
        // cout << p*g << " " << ((m/g)+1)*g << endl;
        // cout << g << endl;
        cout << abs(ans-n) << endl;
    }
}