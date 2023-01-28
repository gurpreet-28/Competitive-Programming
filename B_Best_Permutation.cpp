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
    int n,p,q,r,x,y;
    cin >> n;
    int a[n],b[n];
    if(n%2==0){
    a[n-1]=n;
    a[n-2]=n-1;
    for(int i=0;i<n-3;i+=2){
        a[i]=i+2;
        a[i+1]=i+1;
    }
    }
    else{
    // a[n-1]=n;
    // a[n-2]=n-1;
    // a[n-1]=1;
    // for(int i=0;i<(n-2)/2;i++){
    //     a[i]=2*(i+1);
    // }
    // for(int i=(n-2)/2;i<n-2;i++){
    //     a[i]=(2*(i+1-(n-2)/2))-1;
    // }
    a[n-1]=n;
    a[n-2]=n-1;
    a[0]=1;
    for(int i=1;i<n-2;i+=2){
        a[i]=i+2;
        a[i+1]=i+1;
    }

    }
    printarray(a,n);

    }
}
