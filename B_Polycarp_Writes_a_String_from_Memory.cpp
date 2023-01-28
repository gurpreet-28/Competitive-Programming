#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n;
    string s;
    cin >> s;
    n=s.length();
    unordered_map<char,int>f;
    // int f[26]={0};
    // for(int i=0;i<n;i++){
    //     f[s[i]]++;
    // }
    int i=0,j=0,d=0,c=0;
    for(int i=0;i<n;i++){
        f[s[i]]++;
        if(f[s[i]]==1){
            c++;
        }
        if(c>3){
            d++;
            f.clear();
            f[s[i]]++;
            c=0;
        }
    }
    if(c>0){
        d++;
    }
    cout << d << endl;
  }
}