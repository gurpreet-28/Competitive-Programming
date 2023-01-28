#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n;
    cin >> n;
    int b[n];
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    int a[n]={0};
    if(b[0]==1){
        a[0]=1;
        a[1]=2;
    }
    else{
     if(b[0]==0){
        a[0]=2;
        a[1]=2;
    }   
    }
    int j=1;
    for(int i=2;i<n;i++){
        if(b[j]==0){
            if(a[i-1]%2==0){
            a[i]=2;
            }
            else{
            a[i]=1;
            }
        }
        else{
            if(a[i-1]%2==0){
                a[i]=1;
            }
            else{
                a[i]=2;
            }
        }
        j++;
    }
    // for(int i=0;i<n;i++){
    //    cout << a[i] << " ";
    // }
    if((a[n-1]+a[0])%2==b[n-1]){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
}