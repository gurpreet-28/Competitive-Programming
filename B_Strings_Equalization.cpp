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

bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
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
        int n, p = 0, ans=0;
        // cin >> n;
        string s,w ;
        cin >> s >> w;
        n=s.length();
        map<char,int>m;
        f(i,0,n){
            m[s[i]]++;
        }
        f(i,0,n){
            if(m[w[i]]>0){
                p=1;
                break;
            }
        }
        if(p==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
