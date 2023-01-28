#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    long long int a,b,c,d,k,p,q;
    cin >> a >> b >> c >> d >> k;
    p=abs(a-c)+abs(b-d);
    q=k-p;
    if(q%2==0 && q>=0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
}