#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b,count=0,x,y;
    cin >> n >> m;
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= m; j++){
            x=i*i+j;
            y=i+j*j;
            if(x==n && y==m){
                count++;
            }
            else{
                continue;
            }
        }
    }
    cout << count << endl;
    

}