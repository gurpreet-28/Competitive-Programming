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
        int n, p = 0, q,ans = 0, m;
        cin >> n >> m;
        int a[n];
        inputarray(a,n);
        int b[n]={0};
        q=0;
        f(i,0,n){
            if(2*a[i]>m){
                b[i]=1;
            }
            else if(2*a[i]==m){
                if(q==1){
                    b[i]=1;
                    q=0;
                }
                else{
                    b[i]=0;
                    q=1;
                }
            }
        }
        printarray(b,n);
    }
}
