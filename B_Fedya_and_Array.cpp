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
        int n, m, i=0,p=0, q=1;
        cin >> p >> m;
        n = p-m;
        n*=2;
        cout << n << endl;
        int a[n];
        f(j,m,p+1){
            a[i++]=j;
        }
        for(int j=p-1;j>m;j--){
            a[i++]=j;
        }
        printarray(a,n);
    }
}
