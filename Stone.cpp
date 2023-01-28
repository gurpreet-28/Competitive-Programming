#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    long long int n,k,maxi1=INT_MIN,maxi2=INT_MIN;
    cin >> n >> k;
    long long int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        maxi1=max(a[i],maxi1);
    }
    for (int i = 0; i < n; i++){
        b[i]=maxi1-a[i];
        maxi2=max(b[i],maxi2);
    }
    for(int i=0;i<n;i++){
        c[i]=maxi2-b[i];
    }
    if(k==0){
        for (int i = 0; i < n; i++){
            cout << a[i] << " ";
        }cout << endl;
        continue;
    }
    else if(k%2==1){
        for (int i = 0; i < n; i++){
            cout << b[i] << " ";
        }cout << endl;
        continue;
    }
    else{
        for (int i = 0; i < n; i++){
            cout << c[i] << " ";
        }cout << endl;
        continue;
    }
    
    

    }
}