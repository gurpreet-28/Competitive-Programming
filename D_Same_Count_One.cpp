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

int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, p = 0,q,ans = 0, m, k;
        cin >> n >> m;
        int a[n][m];
        f(i,0,n){
            f(j,0,m){
                cin >> a[i][j];
                if(a[i][j]==1){
                    p++;
                }
            }
        }
        q=p/n;
        if(p%n!=0){
            cout << -1 << endl;
            continue;
        }
        vector<int>v1;
        vector<int>v2;
        f(i,0,n){
            p=0;
            f(j,0,m){
                if(a[i][j]==1){
                    p++;
                }
            }
            if(p>q){
                v1.pb(i);
            }
            else if(p<q){
                v2.pb(i);
            }
            ans+=max(0LL,p-q);
        }
        cout << ans << endl;
        
    }
}
