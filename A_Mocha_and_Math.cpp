#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arrsort(a)        sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,p,b,q=0,r,x=0,y;
    cin >> n;
    int a[n];
    inputarray(a,n);
    arrsort(a);
    if(n==1){
        cout << a[0] << endl;
        continue;
    }
    a[0]=a[0]&a[1];
    a[1]=a[0]&a[1];
    int mini=a[0];
    f(i,1,n){
        a[i]=a[i]&a[i-1];
        a[i-1]=a[i];
        mini=min(mini,a[i]);
    }
    cout << mini << endl;

  }
}
