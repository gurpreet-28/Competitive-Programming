#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n<=0){
        return 0;
    }
    int a=0,p=n;
    while(p!=0){
        a=max(a,p%10);
        p/=10;
    }
    return 1+solve(n-a);
}
int main (){
    int n, m, p=0, q;
    cin >> n;
    cout << solve(n) << endl;
}