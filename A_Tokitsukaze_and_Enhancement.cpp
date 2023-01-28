#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    int x;
    cin >> x;
    if(x%4==1){
        cout << 0 << " " << "A" << endl;
    }
    if(x%4==3){
        cout << 2 << " " << "A" << endl;
    }
    if(x%4==2){
        cout << 1 << " " << "B" << endl;
    }
    if(x%4==0){
        cout << 1 << " " << "A" << endl;
    }


    }
}