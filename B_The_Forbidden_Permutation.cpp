#include <bits/stdc++.h>
// #define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, p=0, q, d;
        cin >> n >> q >> d;
        int per[n],a[q];
        inputarray(per,n);
        inputarray(a,q);
        map<int,int>m;
        f(i,0,n){
            m[per[i]]=i+1;
        }
        vector<int> v;
        int ans = INT32_MAX;
        f(i, 0, q){
            int v1 = m[a[i]];
            if (i == 0){
                p = v1;
                continue;
            }
            ans = min(ans, v1 - p);
            if (p + d + 1 - (p - 1) <= n)
                ans = min(ans, p + d - v1 + 1);
            if (p >= v1 || p + d < v1)
                ans = 0;
            p = v1;
        }
        cout << max(ans, 0) << '\n';
    }
}