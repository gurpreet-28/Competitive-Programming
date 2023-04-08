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
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n >> m;
        int a[n];
        inputarray(a,n);
        arraysort(a);
        int pref[n]={0};
        int suff[n]={0};
        pref[0]=a[0];
        suff[n-1]=a[n-1];
        f(i,1,n){
            pref[i]=a[i]+pref[i-1];
        }
        while(m--){
            int q;
            cin >> q;
            int idx = upper_bound(a,a+n,q) - a;
            int ans = 0;
            idx--;
            if(idx!=n){
                ans += abs((n-idx-1)*q-(pref[n-1]-pref[idx]));
            }
            
            ans += abs((idx+1)*q-(pref[idx]));
            
            cout << ans << " ";
        }
        cout << endl;
    }
}