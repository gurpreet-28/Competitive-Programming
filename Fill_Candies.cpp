#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,k,m;
    cin >> n >> k >> m;
    int q=k*m;
    if(n%q==0){
        cout << n/q << endl;
    }
    else{
        cout << n/q+1 << endl;
    }


    }
}