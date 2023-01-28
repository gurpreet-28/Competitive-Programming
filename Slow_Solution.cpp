#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
while(t--){
    int a,b=0,c,maxT,maxN,sumN;
    cin >> maxT >> maxN >> sumN ;
    a=sumN/maxN;
    b=sumN%maxN;
    if(a<maxT){
        cout << a*(maxN*maxN) + b*b << endl;
    }
    else{
        cout << maxT*(maxN*maxN) << endl;
    }
    }
}
