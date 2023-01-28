#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    int n,c,count=0,p;
    cin >> n >> c;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++){
        p=a[i+1]-a[i];
        // cout << p << " ";
        if(p<=c){
            count++;
        }
        else{
            count=0;
        }
    }
    cout << count+1 << endl;
    }
}