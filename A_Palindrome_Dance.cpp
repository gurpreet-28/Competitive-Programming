#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    int n,a,b,cost=0,p=0;
    cin >> n >> a >> b;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int i=0,j=n-1;
    while(i<j){
        // cout << i << " " << j << endl;
        if((arr[i]==1 && arr[j]==0 )|| (arr[i]==0 && arr[j]==1)){
            p=1;
            break;
        }
        if(arr[i]==1 && arr[j]==2 || arr[i]==2 && arr[j]==1){
            cost+=b;
        }
        if(arr[i]==0 && arr[j]==2 || arr[i]==2 && arr[j]==0){
            cost+=a;
        }
        if(arr[i]==2 && arr[j]==2){
            cost+=(2*min(a,b));
        }
        i++;
        j--;
        // cout << cost << " " << endl;
    }
    if(i==j && arr[i]==2){
        cost+=min(a,b);
    }
    if(p==1){
        cout << -1 << endl;
    }
    else{
        cout << cost << endl;
    }

}
}

