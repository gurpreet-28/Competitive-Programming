#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    long long int n,c=-1;
    cin >> n;
    while(n!=0){
        c+=n%2;
        n/=2;
    }
    cout << c << endl;
    }
}