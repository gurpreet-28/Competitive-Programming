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
    cin >> t;
    while (t--)
    {
        int n, p = 0,k, ans = 0, i = 0,  m = 1e9 + 7, q=0, r=1, po=1;
        cin >> n;
        k=n;
        n=n*2;
        string s;
        cin >> s;
        f(i,0,n){
            if(s[i]=='1'){
                p++;
            }
            else{
                q++;
            }
        }
        // cout << p << endl << q << endl;
        if(p==n || q==n){
            cout << -1 << endl;
            continue;
        }
        vector<int>v;
        if(p<q){
            f(i,0,n){
                if(v.size()==k){
                    break;
                }
                if(s[i]=='0'){
                    v.pb(i+1);
                }
                
            }
        printarray(v,v.size());
        }
        else{
            f(i,0,n){
                if(v.size()==k){
                    break;
                }
                if(s[i]=='1'){
                    v.pb(i+1);
                }
            }
            printarray(v,v.size());
        }
    }
}