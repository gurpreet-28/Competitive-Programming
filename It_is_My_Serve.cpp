#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int p,q,sum=0;
    cin >> p >> q;
    sum=p+q;
    if((sum/2)%2==0){
        cout << "Alice" << endl;
    }
    else{
        cout << "Bob" << endl;
    }
    }
}