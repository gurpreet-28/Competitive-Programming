#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
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
        string a[n];
        inputarray(a,n);
        f(i,0,n){
            f(j,0,m-1){
                if(a[i][j]=='T' and a[i][j+1]=='T'){
                    a[i][j]='P';
                    a[i][j+1]='C';
                }
            }
        }
        f(i,0,n){
            cout << a[i] << endl;
        }
    }
}