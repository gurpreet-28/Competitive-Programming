#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
        int n, p=0, q, r=0, j, x, y;
        cin >> n;
        int a[n],b[n];
        f(i,0,n){
            cin >> a[i] >> b[i];
        }
        p=*min_element(a,a+n);
        q=*max_element(b,b+n);
        f(i,0,n){
            if(a[i]==p && b[i]==q){
                cout << i+1 << endl;
                r=1;
                break;
            }
        }
        if(r==0){
            cout << -1 << endl;
        }
    }
}
