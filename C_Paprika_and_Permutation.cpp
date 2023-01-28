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
        int n, p = 0 ,ans = 0;
        cin >> n;
        int a[n];
        inputarray(a,n);
        arraysort(a);
        int b[n]={0};
        f(i,0,n){
            if(a[i]<=n){
                b[a[i]-1]++;
            }
        }
        vector<int>v;
        vector<int>m;
        f(i,0,n){
            if(b[i]==0){
                v.pb(i+1);
            }
        }
        f(i,0,n){
            if(a[i]>n){
                m.pb(a[i]);
            }
        }
        f(i,0,n){
            if(b[i]>1){
                while(b[i]>1){
                    m.pb(i+1);
                    b[i]--;
                }
            }
        }
        sort(all(v));
        sort(all(m));
        // printarray(v,v.size());
        // printarray(m,m.size());
        f(i,0,v.size()){
            if(m[i]-v[i]<=v[i]){
                p=1;
                break;
            }
        }
        ans = count(b,b+n,0);
        if(p==1){
            ans=-1;
        }
        cout << ans << endl;
    }

}
