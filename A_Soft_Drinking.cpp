#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    int n,k,l,c,d,p,nl,np,x,y,z;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    x=(k*l)/nl;
    y=c*d;
    z=p/np;
    x=min(x/n,y/n);
    cout << min(x,z/n) << endl;
    }
}