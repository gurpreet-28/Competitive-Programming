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
        int ans=0;
        p=0;
        for(int i=m-1;i>0;i-=2){
            int j=p;
            q=p;
            while(j<n){
                if(a[q] != a[j]){
                    ans++;
                }
                q=j;
                j+=i;
            }
            p++;
        }
        cout << ans << endl;
    }
}