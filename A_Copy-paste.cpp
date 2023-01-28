#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int p,n,k,count=0;
    cin >> n >> k;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    p=b[0];
    for(int i=1;i<n;i++){
        while(1){
                b[i]=b[i]+p;
                if(b[i]<=k){
                    count++;
                }
                else{
                    break;
                }
            }
        }
    cout << count << endl;
    }    
}