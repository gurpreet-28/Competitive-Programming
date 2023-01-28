#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int a[3];
    for(int i=0;i<3;i++){
        cin >> a[i];
    }
    sort(a,a+3,greater<int>());
    int k;
    cin >> k;
    k--;
    if(k==0){
        cout << 1 << endl;
    }
    else{
        int p;
        if(k<a[2]){
            p=3*k+1;
        }
        else if(k<a[1] && k>=a[2]){
            p=3*k+1;
        } 
        else{
            p=3*a[2] + 2*(a[1]-a[2]) + 1;
        } 
        if(k+1==a[0] && a[0]!=a[1]){
            p++;
        }
        cout << p << endl;
    }
}
}
unordered_map<int,int> f;
