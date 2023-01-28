#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,count0=0,count1=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            count1++;
        }
        else{
            count0++;
        }
    }
    if(count0<count1){
        for(int i=0;i<count1;i++){
            cout<< 1;
        }
        cout << endl;
    }
    else{
        for(int i=0;i<count0;i++){
            cout<< 0;
        }
        cout << endl;   
    }
    }
}