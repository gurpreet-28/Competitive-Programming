#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int count0=0,count1=0,n;
        cin >> s;
        n=s.length();
        for(int i=0;i<n-1;i++){
            if(s[i]=='0' && s[i+1]=='0'){
                count0++;
            }
            else if(s[i]=='1' && s[i+1]=='1'){
                count1++;
            }
        }
        if(count0==count1){
            cout << 0 << endl;
        }
        else{
            cout << count0 << endl;
        }
    }

}