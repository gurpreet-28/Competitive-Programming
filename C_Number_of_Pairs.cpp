#include <bits/stdc++.h>
#define int               long long
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
        int n, m, p=0, q, l ,r;
        cin >> n >> l >> r;
        int a[n];
        inputarray(a,n);
        arraysort(a);
        int ans=0;
        // printarray(a,n);
        for(int i=0;i<n;i++){
            int low = l-a[i];
            int high = r-a[i];
            // cout << low << " " << high << endl;
            int start = lower_bound(a+i+1,a+n,low)-a;
            int last = upper_bound(a+i+1,a+n,high)-a;
            // cout << start << " " << last << endl << endl;
            ans+=(last-start);
        }
        cout << ans << endl;
    }
}