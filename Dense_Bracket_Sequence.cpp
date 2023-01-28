#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i=0,j=n-1,count=0;
    while(j>=i){
        if(s[i]=='(' && s[j]==')'){
            i++;
            j--;
        }
        else{
            count++;
            i++;
            j--;
        }
    }
    cout << count << endl;
}
}