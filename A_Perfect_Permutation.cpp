#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    int n;
    cin >> n;
    if(n%2==1){
        cout << -1 << endl;
    }
    else{
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout << i+2 << " ";
            }
            else{
                cout << i << " ";
            }
        }
    }
}
}