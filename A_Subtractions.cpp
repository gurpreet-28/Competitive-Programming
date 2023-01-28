#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    long long int a,b,x,y,d,temp,count=0;
    cin >> a >> b;
    x=min(a,b);
    y=max(a,b);
    if(y%x==0){
        cout << y/x << endl;
    }
    else{
        count=y/x;
        while (x!=0 && y!=0){
            temp=x;
            x=y%x;
            y=temp;
            if(x==0){
                break;
            }
            count+=y/x;
        }
        cout << count << endl;
    }
}
}