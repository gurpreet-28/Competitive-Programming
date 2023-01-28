#include <bits/stdc++.h>
using namespace std;
#define for(i,a,b) for (int i = a; i < b; i++)
int main(){
    int t=1;
    // cin >> t;
while(t--){
    int n,count=0,k;
    cin >> n >> k;
    int a[n],d[n];
    for(i,0,n){
        cin >> a[i];
        d[i]=a[i];
    }
    int b[n]={0},j=0;
    for(i,0,n-1){
        if(a[i]>0){
            continue;
        }
        else{
            if(a[i]<0){
                a[i]=a[i]*-1;
                a[i+1]=a[i+1]*-1;
                count++;
                b[j]=i+1;
                j++;
            }
        }
    }
    if(a[n-1]<0){
    cout << count + 1<< endl;
    }
    else{
        cout << count << endl;
    }
    for(i,0,n-1){
        if(d[i]>0){
            continue;
        }
        else{
            if(d[i]<0){
                d[i]=d[i]*-1;
                d[i+1]=d[i+1]*-1;
                count++;
                b[j]=i+1;
                j++;
                cout << i+1 << " ";
            }
        }
    }
    if(d[n-1]>0){
        cout << endl;
        cout << count << endl;
        for(i,0,j){
                cout << b[i] << " ";
        }
        cout << endl;
    }
    else{
        // cout << count+1 << endl;
        for(i,0,j){
                cout << b[i] << " ";
            cout << n ;
        }
        cout << endl;
    }

    }
}