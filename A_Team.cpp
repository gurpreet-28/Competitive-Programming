#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    int n,count=0;
    cin >> n;
    int a[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i][0]+a[i][1]+a[i][2]>1){
            count++;
        }
        else{
            continue;
        }
    }
    cout << count << endl;
    }
}