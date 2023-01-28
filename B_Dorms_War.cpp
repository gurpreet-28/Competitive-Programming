#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,p;
    cin >> n;
    string s;
    cin >> s;
    cin >> p;
    char ch[p];
    for(int i=0;i<p;i++){
        cin >> ch[i];
    }
    int i=0;
    vector <int> v;
    // v.push_back(0);
    while(i<p){
        for(int j=0;j<n;j++){
            if(s[j]==ch[i]){
                v.push_back(j);
            }
        }
        i++;
    }
    sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout << v[i] << " ";
    // }
    if(v.size()==1){
        cout << v[0] << endl;
    }
    else if(v.size()==0){
        cout << 0 << endl;
    }
    else{
        int m=v[0];
    for(int i=0;i<v.size()-1;i++){
        m=max(m,v[i+1]-v[i]);
    }
    cout << m << endl;
    }
    }
}