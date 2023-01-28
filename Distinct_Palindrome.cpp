#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,p,q;
        cin >> n >> x;
        if(n%2==0){
            p=n/2;
        }
        else{
            p=n/2+1;
        }
        if(x>p){
            cout << -1 << endl;
        }
        else{
            char s[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
            char s1[n];
            if(n==1){
                cout << s[0];
            }
            else{
            for(int i=0;i<x;i++){
                s1[i]=s[i];
            }
            for(int i=x;i<p;i++){
                s1[i]=s[x-1];
            }
            if(n%2==0){
            for(int i=0;i<p;i++){
                cout << s1[i];
            }
            }
            else{
                for(int i=0;i<p-1;i++){
                cout << s1[i];
            }
            }
            for(int i=p-1;i>=0;i--){
                cout << s1[i];
            }
        }
        cout << endl;
    }
}
}