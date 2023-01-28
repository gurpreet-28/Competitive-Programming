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
    sort(a,a+n);
    int p=a[n-1]+1;
    int freq[p]={0};
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    sort(freq,freq+p);
    if(freq[p-1]==freq[p-2]){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    }
}