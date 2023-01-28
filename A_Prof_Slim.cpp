#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n;
    cin >> n ;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int i=0,j=n-1;
    while(i<=j){
        if(a[i]<0 && a[j]>0){
            i++;
            j--;
            continue;
        }
        if(a[i]>0 && a[j]<0){
            a[i]=a[i]*-1;
            a[j]=a[j]*-1;
            i++;
            j--;
            continue;
        }
        if(a[i]<0 && a[j]<0){
            i++;
            continue;
        }
        if(a[i]>0 && a[j]>0){
            j--;
            continue;
        }
    }
    int p=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            p=1;
            break;
        }
    }
    if(p==1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    }
}