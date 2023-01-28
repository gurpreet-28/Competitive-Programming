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
    int n,k,p,q,s=0,maxi=0,r;
    cin >> n >> k;
    int a[n];
    if(n>k){
    q=n%k;
    int j=0;
    maxi=1;
    r=q/n;
    if(q%n!=0){
        r++;
    }
    cout << maxi+r << endl;
    }
    else{
    p=k/n;
    s=n*p;
    maxi=p;
    q=s%k;
    q=min(q,k-q);
    // cout << p << "  " << q << endl;
    r=q/n;
    if(q%n!=0){
        r++;
    }
    cout << maxi+r << endl;
    }


  }
}