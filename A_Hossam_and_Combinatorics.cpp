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
    cin >> t;
    while (t--){
        int n,p=0,q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        arraysort(a);
        p=a[n-1];
        q=a[0];
        if(p==q){
            cout << n*(n-1) << endl;
            continue;
        }
        int m1=0,m2=0;
        f(i,0,n){
            if(a[i]==p){
                m1++;
            }
            if(a[i]==q){
                m2++;
            }
        }
        
        cout << 2*m1*m2 << endl;
    }
}