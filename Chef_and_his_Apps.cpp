#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int x,y,z,s,a,b;
    cin >> s >> x >> y >> z;
    a=s-(x+y);
    if(a>=z){
        cout << 0 << endl;
    }
    else{
        if(s-x>=z || s-y>= z){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
    }
}