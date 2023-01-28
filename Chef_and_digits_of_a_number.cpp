#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,count0=0,count1=0;
    string s;
    cin >> s;
    n=s.length();
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1'){
            count1++;
        }
        else{
            count0++;
        }
    }
    if(count0 == 1 || count1 == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    

    }
}