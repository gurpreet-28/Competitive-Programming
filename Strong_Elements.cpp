#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6){
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}
 
int main(){
    int t;
    cin >> t;
while(t--){
    int n,g,count=0,p=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    g=a[0];
    for(int i=0;i<n;i++){
        g=__gcd(g,a[i]);
    }
    if(g!=1){
        cout << n << endl;
    }
    
    else{
        g=0;
        for(int i=0;i<n;i++){
            g=__gcd(g,a[i]);
            if(g==1){
                p=i;
                break;
            }
        }
        g=0;
        for(int i=0;i<n;i++){
            if(i==p){
                continue;
            }
            g=__gcd(g,a[i]);
        }
        if(g==1){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    }
}