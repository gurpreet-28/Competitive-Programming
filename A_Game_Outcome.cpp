#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    int n,sumc=0,sumr=0,count=0;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++){
            sumc=0,sumr=0;
            for(int k=0;k<n;k++){
                sumc+=a[k][j];
                }
            for(int l=0;l<n;l++){
                sumr+=a[i][l];  
                }
            // cout << sumc << " " << sumr << endl;
            if(sumc>sumr){
                count++;
            }
        }
    }
    cout << count << endl;
    

    }
}