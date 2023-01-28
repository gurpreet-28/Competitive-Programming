#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    // n=s.length();
    if(n==1 && k!=0){
        cout << 0 << endl;
    }
    else{
    if(k>0){
    if(s[0]!='1'){
        s[0]='1';
        k--;
    }
    if(k!=0){
    for(int i=1;i<n;i++){
        if(s[i]!='0'){
            s[i]='0';
            k--;
            if(k<=0){
            break;
            }
        }        
    }
    }
    }
    cout << s << endl;
    }
    }
}