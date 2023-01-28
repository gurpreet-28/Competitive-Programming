#include <bits/stdc++.h>
using namespace std;

// int fibo(int a){
//     if(a==1 || a==0){
//         return 0;
//     }
//     else{
//         return a+fibo(a-1); 
//     }
// }
// 0 1 1 2 3 5 8 13 21
int main(){
    int t=1;
    // cin >> t;
while(t--){
    long long int n,a=0,b=1,asdf;
    cin >> n;
    // cout << a << " " << b << " ";
    for(int i=0;i<=n-2;i++){
        cout << b << " ";
        asdf=b;
        b=a+b;
        a=asdf;
    }
    cout << endl;
    // a=0,b=1,1,2
    }
}