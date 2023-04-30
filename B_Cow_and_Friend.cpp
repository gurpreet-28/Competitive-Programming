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
        int n, p=0, q;
        int m;
        cin >> n >> m;
        int a[n];
        inputarray(a,n);
        int t=0,maxi=0;
        f(i,0,n){
            if(m==a[i]){
                t=1;
            }
            maxi=max(maxi,a[i]);
        }

        if(t){
            cout << 1 << endl;
        }
        else{
            if(2*maxi>=m){
                cout << 2 << endl;
            }
            else{
                p=2*maxi;
                q=m-p;  
                int ans=(q+maxi-1)/maxi;
                cout << ans+2 << endl;
            }
        }
    }
}