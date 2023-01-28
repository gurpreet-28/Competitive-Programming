#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,ones=0,zeros=0;
    cin >> n;
    string s;
    cin >> s;
    // int a[n];
    for(int i=0;i<n;i++){
        // a[i]=s[i]-'0';
        if(s[i]=='0'){
            zeros++;
        }
        else{
            ones++;
        }
    }
    if(n%2==0){
    if(zeros%2==0 || ones%2==0){
        cout << "YES" << endl;
    } 
    else{
        cout << "NO" << endl;
    }
    }
    else{
    if((zeros%2==0 && ones%2==1) || (zeros%2==1 && ones%2==0)){
        cout << "YES" << endl;
    } 
    else{
        cout << "NO" << endl;
    }   
    }


    }
}