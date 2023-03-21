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
        int n, m, p=0, q;
        cin >> n >> q;
        int a[n];
        inputarray(a,n);
        int pref[n+1];
        pref[0]=0;
        f(i,1,n+1){
            pref[i]=pref[i-1]+a[i-1];
        }
        while(q--){
            int l,r,k;
            cin >> l >> r >> k;
            // l--;
            // r--;
            int sum=pref[l-1]+pref[n]-pref[r];
            sum+=(r-l+1)*k;
            if(sum%2==1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }

    }
}