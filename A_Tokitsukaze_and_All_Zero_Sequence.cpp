#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,count0=0,p=0,q=0,r=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]==0){
            p=1;
            count0++;
        }
        if(a[i]==a[i+1]){
            q=1;
        }
    }
    if(a[n-1]==0){
        count0++;
    }
    if(p==1){
    cout << n-count0 << endl;
    continue; 
    }
    if(q==1){
        cout << n << endl;
        continue;
    }
    cout << n+1 << endl;
    }
}