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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        int n;
        cin >> n;
        int a[n+1]={0};
        for(int i=2;i<=n;i++){
            cout << "? " << 1 << " " << i << endl;
            cin >> a[i];
        }        
        cout << "? " << 2 << " " << n << endl;
        cin >> a[1];
        a[1]=a[n]-a[1];
        cout << "! ";
        for(int i=1;i<=n;i++){
            cout << a[i]-a[i-1] << " ";
        }
    }
}