#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,k,temp,sum=0,p=0,m=INT_MIN;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            if(a[i]+a[i+1]<=k){
                swap(a[i],a[i+1]);
            }
            else{
            p=1;
            break;
            }
        }
    }
    if(p==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
}