#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a(n);
        int neg = 0, pos = 0, z = 0;
        for (int &i : a) {
            cin >> i;
            if (i > 0) pos++;
            else if (i < 0) neg++;
            else z++;
        }
        
        sort(all(a));
        int ma = INT_MAX;
        for (int i = 1; i < n; i++) {
            if (a[i] <= 0)
                ma = min(ma, a[i] - a[i - 1]);
        }
        int j = 0;
        while (j < n and a[j] <= 0) j++;
        int ans = neg + z;
        if (j < n and a[j] <= ma) ans++;
        cout << max(1ll, ans) << '\n';
    }
}