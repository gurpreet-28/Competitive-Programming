#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
while(q--){
    int x,y,sum=0;
    cin >> x >> y;
    int b[x]={0};
    for (int i = 0; i < x; i++)
    {
        b[i]=a[i];
    }
    sort(b,b+x);
    for (int i = 0; i < y; i++)
    {
        sum+=b[i];
    }
    cout << sum << endl;
    }
}