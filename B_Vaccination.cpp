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
        int n, m, p=0, q, k, d, w;
        cin >> n >> k >> d >> w;
        int a[n];
        inputarray(a,n);
        int ans = 0;
        for (int i = 0; i < n; i++){
            int temp = a[i];
            int ct=0;
            int m=k;
            while(m>0 and i<n && a[i]-w-temp<=d){
                ct=1;
                m--;
                i++;
            }
            if(ct==1){
                i--;
            }
            ans++;
        }
        cout << ans << endl;
    }
}