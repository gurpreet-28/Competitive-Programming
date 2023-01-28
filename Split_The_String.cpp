#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int o=0,z=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            o++;
        }
    }
    z=n-o;
    if(z==o){
        cout << 0 << endl;
    }
    else{
        if(abs(z-o)%k==0){
            cout << abs(z-o)/k << endl;
        }
        else{
            cout << abs(z-o)/k + 1 << endl;
        }
    }

    }
}