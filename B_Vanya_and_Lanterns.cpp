#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
    int n,p=0,q,r,k,x,y,m=0;
    // double m=0;
    cin >> n >> k;
    int a[n];
    inputarray(a,n);
    arraysort(a);
    f(i,0,n-1){
        m=max(m,(a[i+1]-a[i]));
    }
    r=m/2.0;
    if(a[0]!=0){
        if(a[0]-r>0){
            m=max(m,2*a[0]);
        }
    }
    if(a[n-1]!=k){
        m=max(m,2*(k-a[n-1]));
    }
    cout << fixed << m/2.0 << endl;
    }
}