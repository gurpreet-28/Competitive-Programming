#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,p,q;
    cin >> n;
    if(n/100>10){
        cout << -1 << endl;
    }
    else{
        p=(n/100);
        q=n%100;
        if(q>(10-p)){
            cout << -1 << endl;
        }
        else{
            cout << p+q << endl;
        }
    }


    }
}