#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    int n,a;
    char b;
    string s;
    cin >> s;
    n=s.length();
    a=s[0];
    if(a<92){
        cout << s << endl;
    }
    else{
        b=s[0]-32;
        s[0]=b;
        cout << s << endl;
    }


    }
}