#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,temp=0,m=INT_MIN;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int f[1001]={0};
        for(int i=0;i<n;i++){
            f[a[i]]++;
        }
        for (int i = 0; i < 1001; i++){
            if(m<f[i]){
                m=f[i];
            }
        }
        cout << n-m << endl;
    }
}