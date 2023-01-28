#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,z=0,o=0;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    for(int i=0;i<n;i++){
        if(s1[i]=='1' && s2[i]=='0'){
            o++;
        }
        if(s2[i]=='1' && s1[i]=='0'){
            o++;
        }
    }
    if(o%2==0){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }

    }
}