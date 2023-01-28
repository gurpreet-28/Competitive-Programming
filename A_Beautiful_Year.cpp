#include <bits/stdc++.h>
using namespace std;
int freq(int n){
    int a[10]={0},count=0;
    while(n!=0){
        a[n%10]++;
        n=n/10;
    }
    for(int i=0;i<10;i++){
        if(a[i]>0){
            count++;
        }
        else{
            continue;
        }
    }
    return count;
}


int main(){
    int t=1;
    // cin >> t;
while(t--){
    int n;
    cin >> n;
    int i=n+1;
    while(1){
        if(freq(i)==4){
            cout << i;
            break;
        }
        else{
            i++;
        }
    }
    }
}