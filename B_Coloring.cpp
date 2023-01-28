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
        int n, p = 0, q,ans = 0, m, k;
        cin >> m >> n >> k;
        int a[n];
        inputarray(a,n);
        q=m/k;
        if(m%k!=0){
            q++;
        }
        int maxi=*max_element(a,a+n);
        if(maxi>q){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}
