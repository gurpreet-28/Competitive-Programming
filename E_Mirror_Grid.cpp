#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    ll int size=0,n,p,q,i,j,c=0;
    cin >> n;
    string s;
    int a[n][n];
    while(size!=n){
        cin >> s;
        for(i=0;i<n;i++){
            a[size][i]=s[i]-'0';
        }
        size++;
    }
    for(i=0;i<(n-1)/2;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=a[n-1-i][n-1-j]){
                c++;
            }
            // cout << a[i][j] << " ";
        }
        // cout << endl;
    }
    i=(n-1)/2;
        for(j=0;j<=(n-1)/2;j++){
            if(a[i][j]!=a[i][n-1-j]){
                c++;
            }
            // cout << a[i][j] << " ";
    }
        // cout << endl;
    cout << c << endl;

    }
}