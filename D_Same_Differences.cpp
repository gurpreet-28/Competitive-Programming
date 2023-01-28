
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


int factorial(int n) {
      if(n == 0)
      return 1;
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
 
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,p,q,r,x,y,m=0,ans=0;
    cin >> n;
    int a[n];
    inputarray(a,n);
    map<int,int>f;
    f(i,0,n){
        a[i]-=(i+1);
        f[a[i]]++;
    }
    f(i,0,n){
        if(f[a[i]]>1){
            ans+=(f[a[i]]*(f[a[i]]-1))/2;
            f[a[i]]=0;
        }
    }
    cout << ans << endl;

  }
}
