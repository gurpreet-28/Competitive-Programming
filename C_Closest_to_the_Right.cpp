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
    // cin >> t;
    while (t--){
        int n, m, p=0;
        cin >> n >> m;
        int a[n];
        inputarray(a,n);
        int q[m];
        inputarray(q,m);
        f(i,0,m){
            int l=0,r=n-1;
            int ans=n+1;
            while(l<=r){
                int m=l+(r-l)/2;
                if(a[m]<q[i]){
                    l=m+1;
                }
                else{
                    ans=min(m+1,ans);
                    r=m-1;
                }
            }
            cout << ans << endl;
        }
        
    }
}