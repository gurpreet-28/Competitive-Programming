#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    long long int n,m,p=0,q=0,i,j;
    long long int sum=0;
    cin >> n >> m;
    p=m*(m+1)/2;
    q=m*(n*(n+1)/2);
    sum=p+q-m;
    cout << sum << endl;
    }
}