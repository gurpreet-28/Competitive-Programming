#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n;
    cin >> n;
    int p=1,q=n;
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout << q-- << " ";
        }
        else{
            cout << p++ << " ";
        }
    }
    cout << endl;
    }
}