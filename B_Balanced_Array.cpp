#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n;
    cin >> n;
    int a[n];
    if((n/2)%2==1){
        cout << "NO" << endl;
    }
    else{
        int j=0;
        cout << "YES" << endl;
        for(int i=0;i<n;i++){
            if(i<n/2){
            a[i]=2+(4*i);
            }
            else{
                a[i]=a[i-n/2]+(pow(-1,j++));
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

    }




    }
}