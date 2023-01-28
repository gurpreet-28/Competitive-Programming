#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,m,p=0;
    cin >> n >> m;
    int a[3]={0};
    string s1,s2;
    while(n--){
    p=0;
    cin >> s1 >> s2;
    if(s1[0]=='c'){
        for(int i=0;i<m;i++){
            if(s2[i]=='0'){
                p=1;
                break;
            }
        }
        if(p==0){
            a[2]++;
        }
        else{
            a[0]++;
        }
    }
    else{
        for(int i=0;i<m;i++){
            if(s2[i]=='0'){
                p=1;
                break;
            }
        }
        if(p==1){
            a[2]++;
        }
        else{
            a[1]++;
        }
    }
    }
    if(a[0]>0){
        cout << "INVALID" << endl;
        continue;
    }
    else if(a[0]==0 && a[1]>0){
        cout << "WEAK" << endl;
        continue;
    }
    else{
        cout << "FINE" << endl;
        continue;
    }
   }
}