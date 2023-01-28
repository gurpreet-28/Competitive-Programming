#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }   
    sort(a,a+n);
    unordered_map<int,int>f;
    for(int i=0;i<n;i++){
        f[a[i]]++;
    }
    int c=0;
    for(int i=0;i<n;i++)
        if(f[a[i]]>=i+1){
            b[i]=f[a[i]];
            f[a[i]]--;
        }
        else{
            c++;
        }

    }
}