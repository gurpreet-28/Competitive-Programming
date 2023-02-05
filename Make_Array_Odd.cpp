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
        cin >> n >> m;
        int a[n];
        inputarray(a,n);
        f(i,0,n){
            if(a[i]%2==1){
                p++;
            }
        }
        q=n-p;
        if(p==n){
            cout << 0 << endl;
            continue;
        }
        if(m%2==0 && p==0){
            cout << -1 << endl;
            continue;
        }
        if(m%2==1){
            cout << (q+1)/2 << endl;
        }
        else{
            cout << q << endl;
        }
    }
}