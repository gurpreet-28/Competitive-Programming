#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    long double l, d, v1 ,v2 ,x;
    cin >> d >> l >> v1 >> v2;   
    x=abs(d-l)*(1.0);
    cout << fixed <<  setprecision(20) << x/(v1+v2);
    }
}