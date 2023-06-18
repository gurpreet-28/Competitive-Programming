#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a,n)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;


void solve(){
    int n, mod=1e9+7, p=0, q;
    cin >> n;
    int a[n];
    int b[n];
    inputarray(a,n);
    inputarray(b,n);
    sort(a,a+n);
    sort(b,b+n);
    int ans = 1;
    int j=n-1;
    p=0;
    for(int i=n-1;i>=0;i--){
        while(j>=0 and a[j]>b[i]){
            p++;
            j--;
        }
        ans*=p;
        ans%=mod;
        p--;
    }
    cout << ans << endl;

}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        solve();
    }
}