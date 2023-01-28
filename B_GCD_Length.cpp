#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,a,b,c,p,q,g;
    cin >> a >> b >> c;
    
    p=min(pow(10,a-1),pow(10,b-1));
    q=max(pow(10,a-1),pow(10,b-1));
    g=pow(10,c-1);
    q=q+g;
    if(a<b){
        cout << p << " " << q << endl;
    }
    else{
        cout << q << " " << p << endl;
    }
  }
}