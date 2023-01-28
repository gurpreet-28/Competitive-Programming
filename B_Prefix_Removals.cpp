#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    string s;
    cin >> s;
    int n,p;
    n=s.length();
    for(int i=0;i<n;i++){
        p=0;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                p=1;
                break;
            }
        }
        if(p==0){
        cout << s[i];
        }
    }
    cout << endl;

    }
}