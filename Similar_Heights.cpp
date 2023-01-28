#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,q=INT_MAX,z=0;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    cout << a[n-1] << endl;
    int p=a[n-1],c=0,k;
    int f[p+1]={0};
    for(int i=0;i<n;i++){
        f[a[i]]++;
    }
    for(int i=1;i<=p;i++){
        if(f[i]==1){
            k=i;
            c++;
        }
        if(f[i]>2){
            z=1;
        }
    }
    for(int i=0;i<n;i++){
        if(b[i]==k){
            k=i;
            break;
        }
    }
    // cout << k << endl;
    if(c==1){
        if(k==n-1){
            if(z==1){
                cout << 1 << endl;
                continue;
            }
            else{
                cout << 2 << endl;
                continue;
            }
        }
    }
    if(k==n-1 && c==2){
        cout << 1 << endl;
        // for(int i=1;i<=p;i++){
        //     if(f[i]==0 || f[i]==1){
        //         continue; 
        //     }
        //     q=min(f[i],q);
        // }
        // cout << q << endl;
    }
    else{
        if(c%2==0)cout<<c/2<<endl;
        else cout << c/2+1 << endl;
    }


    }
}