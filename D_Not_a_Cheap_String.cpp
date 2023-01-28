#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int p,n,sum=0;
    string w,s;
    cin >> w;
    cin >> p;
    n=w.length();
    s=w;
    for(int i=0;i<n;i++){
        sum+=w[i]-96;
    }
    // cout << sum << endl;
    sort(s.begin(),s.end());
    if(sum<=p){
        cout << w << endl;
    }
    else{
        int c=0,f[26]={0};

    for(int i=n-1;i>=0;i--){
        sum = sum - (s[i]-96);
        f[s[i]-97]++;
        if(sum<=p){
            break;
        }
    }
    // for(int i=0;i<26;i++){
    //     cout << f[i] << " ";
    // }
    // cout << sum << endl;
    p=0;
    for(int i=0;i<n;i++){
        if(f[w[i]-97]>0){
            f[w[i]-97]--;
            continue;
        }
        cout << w[i];
    }
    cout << endl;
    }
    }
}