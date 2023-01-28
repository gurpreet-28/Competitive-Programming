#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n;
    cin >> n;
    int a[n];
    unordered_map<int,int>f;
    for(int i=0;i<n;i++){
        cin >> a[i];
        f[a[i]]++;
    }
    int i=0,j=n-1,q=0;
    while(i<=j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            q=1;
            break;
        }
    }
    if(q==1){
        cout << "no" << endl;
    }
    else{
        for(int i=1;i<=7;i++){
            if(f[i]==0){
                q=1;
                break;
            }
        }
        if(q==1){
            cout << "no" << endl;
        }
        else{
            int r;
            for(int i=0;i<n;i++){
                if(a[i]==7){
                    r=i;
                    break;
                }
            }
            for(int i=0;i<r;i++){
                if(a[i]>a[i+1]){
                    r=1;
                    break;
                }
                if(a[i]==7){
                    break;
                }
            }
            if(r==1){
                cout << "no" << endl;
            }
            else{
                cout << "yes" << endl;
            }
        }
    }


    }
}