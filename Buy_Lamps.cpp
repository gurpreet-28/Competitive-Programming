#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,k,x,y,q;
    cin >> n >> k >> x >> y;
    q=n-k;
    int r=x*k;
    cout << r + min(q*x,q*y) << endl;

    }
}