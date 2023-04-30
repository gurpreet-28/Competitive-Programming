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
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n;
        if(n==1 || n==2){
            cout << 0 << endl;
            continue;
        }        
        if(n==3){
            cout << 2 << endl;
            continue;
        }
        else{
            p=n-2;
            p/=2;
            p*=3;
            if(n%2==1){
                cout << p+2 << endl;
            }
            else{
                cout << p << endl;
            }
        }
        
    }
}