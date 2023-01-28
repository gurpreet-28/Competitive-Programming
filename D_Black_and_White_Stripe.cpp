#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int a[n];
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            a[i]=1;
        }
        else{
            a[i]=0;
        }
    }
    int m,sum=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    m=k-sum;
    if(sum==k){
        cout << 0 << endl;
    }
    else{
        for(int i=k;i<n;i++){
            sum+=a[i]-a[i-k];
            m=min(k-sum,m);
        }
        cout << m << endl;
    }
    }
}


