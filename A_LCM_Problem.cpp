#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    lli l ,r;
    cin >> l >> r;
    if(r<2*l){
        cout << -1 << " " << -1 << endl;
    }
    else{
        cout << l << " " << 2*l << endl;
    }


    }
}