#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin >> t;
while(t--){
    string s1,s2;
    cin >> s1 >> s2;
    int x1,x2,y1,y2,m;
    x1=s1[0]-'a';
    y1=s1[1]-'1';
    x2=s2[0]-'a';
    y2=s2[1]-'1';
    // cout << x1 << " " << y1 << endl;
    // cout << x2 << " " << y2 << endl;
    m=max(abs(x1-x2),abs(y1-y2));
    cout << m << endl;
    int p,q;
    if(abs(x1-x2)==abs(y1-y2)){
        p=0;
        if(x1<x2 && y1>y2){
            while(m--){
                cout << "RD" << endl;
            }
        }
        if(x1>x2 && y1<y2){
            while(m--){
                cout << "LU" << endl;
            }
        }
        if(x1<x2 && y1<y2){
            while(m--){
                cout << "LD" << endl;
            }
        }
        if(x1>x2 && y1>y2){
            while(m--){
                cout << "RU" << endl;
            }
        }
    }
    else{
        int x,y;
        p=min(abs(x1-x2),abs(y1-y2));
        x=x1+p;
        y=y1+p;
        p=q;
        if(x1<x && y1>y){
            while(p--){
                cout << "RD" << endl;
            }
        }
        if(x1>x && y1<y){
            while(p--){
                cout << "LU" << endl;
            }
        }
        if(x1<x && y1<y){
            while(p--){
                cout << "LD" << endl;
            }
        }
        if(x1>x && y1>y){
            while(p--){
                cout << "RU" << endl;
            }
        }
    q=max(abs(x1-x2),abs(y1-y2));
    
   
   
   
    }




    }
}