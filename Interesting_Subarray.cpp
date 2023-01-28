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
    int n,p,b,q=0,r,x=0,y;
    cin >> n;
    int a[n];
    inputarray(a,n);
    // f(i,0,n){
    //     a[i]=rand();
    // }
    sort(a,a+n);
    p=max(a[n-1],-1*a[0]);
    q=a[0];
    if(a[n-1]<1){
        r=-1*a[0];
        f(i,0,n){
            if(a[i]==0){
                continue;
            }
            r=min(r,-1*a[i]);
        }
        r=-1*r;
        q=r;
    }
    else{
        r=a[0];
    }
    f(i,1,n){
        if(a[i]>0&&q<0){
            r=a[i];
        }
    }
    // printarray(a,n);
    cout << q*r << " " << p*p << endl;

  }
}

