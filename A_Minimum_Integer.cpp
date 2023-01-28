#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int l,r,d,a=0;
    cin >> l >> r >> d;
    if(d<l){
        cout << d << endl;
    }
    else{
        cout << (r/d+1)*d << endl;
    }

    }
}