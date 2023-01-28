#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    int n,sum=0;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    if(n>2){
    for(int i=0;i<n;i++){
        sum+=a[i][i];
    }
    for(int i=0;i<n;i++){
        sum+=a[n-1-i][i];
        
    }
    for(int i=0;i<n;i++){
        sum+=a[n/2][i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i][n/2];
    }
    cout << sum-3*a[n/2][n/2] << endl;
    }
    else{
        if(n==1){
            cout << a[0][0] << endl;
        }
        else{
            sum=a[0][0]+a[1][0]+a[0][1]+a[1][1]; 
            cout << sum << endl; 
        }
    }
}
}

for(int i=0;i<)