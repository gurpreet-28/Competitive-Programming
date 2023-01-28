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
    int t;
    cin >> t;
    while (t--){
    int n,k,q,p,r;
    cin >> n >> k;
    p=n+(n/2);
    q=k/p;
    r=k%p;
    int a[n];
    inputarray(a,n);
    if(k<=n){
    for(int i=0;i<k;i++){
        a[i%n]=a[i%n]^a[n-(i%n)-1];
    }
    printarray(a,n);
    continue;
    }
    if(q%2==1){
        reverse(a,a+n);
    }
    for(int i=(q%2)*(n/2);i<r;i++){
        a[i%n]=a[i%n]^a[n-(i%n)-1];
    }
    if(n%2==1){
        a[n/2]=0;
    }
    printarray(a,n);
  }
}