#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    unordered_map<char,int>f1;
    string a,b;
    cin >> a >> b;
    int n,na,nb,nc;
    na=a.size();
    nb=b.size();
    cin >> n;
    for(int i=0;i<na;i++){
        f1[a[i]]++;
    }
    for(int i=0;i<nb;i++){
        f1[b[i]]++;
    }
    unordered_map<char,int>f2;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        nc=s.size();
        for(int i=0;i<nc;i++){
            f2[s[i]]++;
        }
        s.clear();
    }
    int p=0;
    for(char i='a';i<='z';i++){
        if(f2[i]==0){
            continue;
        }
        if(f1[i]<f2[i]){
            p=1;
            break;
        }
        // cout << i << "----" << f1[i] << "----" <<  f2[i] << endl;
    }
    if(p==1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    }
}