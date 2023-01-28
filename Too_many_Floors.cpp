#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int x,y,p,q;
    cin >> x >> y;
    if(x%10==0){
        p=x/10;
    }
    else{
    p=x/10+1;
    }
    if(y%10==0){
        q=y/10;
    }
    else{
    q=y/10+1;
    }
    cout << abs(p-q) << endl;


    }
}