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
    int t;
    cin >> t;
    while (t--){
    int r,g,b,w,n,p,q,z=0,o=0,e=0;
    cin >> r >> g >> b >> w;
        if (r % 2 == 0)
            e++;
        else
            o++;
        if (g % 2 == 0)
            e++;
        else
            o++;
        if (b % 2 == 0)
            e++;
        else
            o++;    
        if (w % 2 == 0)
            e++;
        else
            o++;
    if (e >= 3) {
            cout << "Yes" << endl;
    } 
    else {
        if (e == 1 and r > 0 and g > 0 and b > 0) {
        cout << "Yes" << endl;
        }
        else if (e == 0 and r > 0 and g > 0 and b > 0) {
            cout << "Yes" << endl;
        } 
        else {
            cout << "No" << endl;
        }
    }
  }
}