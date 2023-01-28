#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
        int n,p=0,q,m;
        cin >> n >> m;
        //int a[n];
        //inputarray(a,n);
        if((m-n)==0){
            cout << n << "12" << " " << m << "13" << endl;
            continue;
        }
        if((m-n)==1){
            cout << n << "99" << " " << m << "00" << endl;
        }
        else if((m-n)==-8){
            cout << n << "99" << " " << m << "000" << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}