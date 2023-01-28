#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    long long int n,x=0,sum=0,count=0;
    cin >> n;
    x=n-1;
    long long int arr[n][n];
    while(x!=-1){
        long long int a[n];
        vector<long long int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        } 
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<n;i++){
            arr[x][i]=v[i];
        }
        v.clear();
        x--;
    }
    long long int temp,q=0;
    temp=arr[0][0];
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]<temp && q==0){
                // cout << temp << " ";  
                sum=sum+temp;
                temp=arr[i][j];
                count++;
                q=1;
            }
        }
        q=0;
        // cout << endl;
    }
    long long int i=0,j=0;
    sum+=temp;
    // cout << temp << endl;
    // count every time element is added to sum
    // if count == n, cout << sum
    // else print -1

    count++;
    if(count==n){
        cout << sum << endl;
    }
    else{
        cout << -1 << endl;
    }
}
}