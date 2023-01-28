#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    int p=0,s,n,x;
    string s1,s2;
    cin >> s;
    cin >> s1;
    for(int i=0;i<s;i++){
        if(s1[i] == '4' || s1[i] == '7'){
            continue;
        }
        else{
            p=1;
            break;
        } 
    }
    if(p==1){
        cout << "NO" << endl;
    }
    else{
        int a=0,b=0;
        for(int i=0;i<s/2;i++){
            a+=(s1[i]-48);
        }
        for(int i=s-1;i>=s/2;i--){
            b+=(s1[i]-48);
        }
        if(a==b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        } 
    }
}
}