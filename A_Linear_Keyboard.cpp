#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,sum=0;
    string s,alpha;
    cin >> alpha >> s;
    n=s.length();
    int f[n]={0};
    for (int i = 0; i < n; i++){
        for(int j=0;j<26;j++){
            if(s[i]==alpha[j]){
                f[i]=j+1;
                continue;
            }
        }
        
    }
    for (int i = 0; i < n-1; i++){
        sum+=abs(f[i]-f[i+1]);
    }
    cout << sum << endl;
    }
}
