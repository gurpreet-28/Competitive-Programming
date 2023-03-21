
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
        int a[n][m];
        set<int>st;
        f(i,0,n){
            f(j,0,m){
                a[i][j] = i+1024*j;
                st.insert(a[i][j]);
            }
        }
        cout << st.size() << endl;
        f(i,0,n){
            f(j,0,m){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}