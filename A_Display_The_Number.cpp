#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;
int numofseg(int n){
    if(n==0 || n==6 || n==9){
        return 6;
    }
    if(n==2 || n==3 || n==5){
        return 5;
    }
    if(n==8){
        return 7;
    }
    if(n==1){
        return 2;
    }
    if(n==4){
        return 4;
    }
    else{
        return 3;
    }
}
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n,p=0,q;
        cin >> n;
        if(n==3){
            cout << 7 << endl;
            continue;
        }
        if(n%2==0){
            f(i,0,n/2){
                cout << 1;
            }
            cout << endl;
        }
        else{
            cout << 7;
            f(i,0,(n-3)/2){
                cout << 1;
            }
            cout << endl;
        }
        
    }
}