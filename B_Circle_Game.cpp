#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(n%2==1){
        cout << "Mike" << endl;
    }
    else{
        int b[n/2],c[n/2],q=0,j=0,k=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                b[j]=a[i];
                j++;
            }
            else{
                c[k]=a[i];
                k++;
            }
        }
        sort(b,b+n/2);
        sort(c,c+n/2);
        if(b[0]>c[0]){
            cout << "Mike" << endl;
        }
        else if(b[0]<c[0]){
            cout << "Joe" << endl;
        }
        else{
            int d=b[0];
            for(int i=0;i<n;i++){
                if(a[i]==d){
                    q=i;
                    break;
                }
            }
            if(q%2==1){
                cout << "Mike" << endl;
            }
            else{
                cout << "Joe" << endl;
            }
        }
    }
    }
}