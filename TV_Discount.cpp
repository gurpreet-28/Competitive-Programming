#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int a,b,c,d,p,q;
    cin >> a>> b >> c >> d;
    p=a-c;
    q=b-d;
    if(p<q){
        cout << "FIRST" << endl;
    }
    else if(p>q){
        cout << "SECOND" << endl;
    }
    else{
        cout << "ANY" << endl;
    }


    }
}