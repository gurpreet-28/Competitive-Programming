#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int n,i=1,j=1,p;
    cin >> n;
    p=n;
    while(p){
        cout << p << " ";
        for(int i=n;i>0;i--){
            if(i==p){
                continue;
            }
            cout << i << " ";
        }
        cout << endl;
        p--;
    }


    }
}