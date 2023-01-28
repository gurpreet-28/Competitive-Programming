#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    float x,p,q;
    cin >> a >> b;
    p=float(b)/a;
    q=3/2.0;
    x=ceil(log(p)/log(q));
    // cout << p << " " << q << endl;
    // cout << log(p) << " " << log(q) << endl;
    if((a*pow(3,x))==(b*pow(2,x))){
        x++;
    }
    cout << x << endl;
    
}