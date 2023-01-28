#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,m,d1,d2,p=0;
        cin >> a >> b >> c;
        if(a>=b && a>=c){
            d1=a-b;
            d2=a-c;
        }
        if(b>=a && b>=c){
            d1=b-a;
            d2=b-c;
        }
        if(c>=b && c>=a){
            d1=c-b;
            d2=c-a;
        }
        if(d1==d2){
            cout << "NO" << endl;
        }
        else{
            int a[31],k,l;
            for(int i=0;i<=30;i++){
                a[i]=pow(2,i);
            }
            int r,s;
            // r=CheckForSequence(a,31,d1);
            // s=CheckForSequence(a,31,d2);

            for (int i = 30; i >= 0; i--) {
            if (d1 >= a[i]){
                d1 -= a[i];
                a[i]=0;
            }
            }
            if (d1 != 0){
             r=0;
            }
            else{
            r=1;
            }
            for (int i = 30; i >= 0; i--) {
            if (d2 >= a[i]){
                d2 -= a[i];
            }
            }
            if (d2 != 0){
                s=0;
            }
            else{
                s=1;
            }
            if(r==1 && s==1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}


