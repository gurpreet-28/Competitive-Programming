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
        cin >> n;
        vector<int>a(n);
        inputarray(a,n);
        int sum = accumulate(a.begin(),a.end(),0);
        int b[n],c[n];
        f(i,0,n){
            b[i]=a[i]+p;
            p+=a[i];
        }
        p=0;
        for(int i=n-1;i>=0;i--){
            c[i]=a[i]+p;
            p+=a[i];
        }
        // printarray(b,n);
        // printarray(c,n);
        int ans=1;
        for(int i=0;i<n-1;i++){
            ans=max(ans,__gcd(c[i+1],b[i]));
        }
        cout << ans << endl;
    }
}