#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    int n,count=0;
    string s;
    cin >> s;
    n=s.length();
    int f[26]={0};
    for(int i=0;i<n;i++){
        f[s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(f[i]>0){
            count++;
        }
        else{
            continue;
        }
        // cout << f[i] << " ";
    }
    if(count%2==1){
    cout << "IGNORE HIM!"<< endl;
    }
    else{
        cout << "CHAT WITH HER!" << endl;
    }
}
}