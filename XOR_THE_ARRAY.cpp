#include <bits/stdc++.h>
#define int long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define all(a) a.begin(),a.end()
#define arraysort(a) sort(a,a+n)
#define sci(n) scanf("%lld",&n);
#define pf(n) printf("%lld\n",n);
#define scc(ch) scanf("%s",&ch);
#define pfc(ch) printf("%s\n",&ch);
#define newline printf("\n");
#define printarray(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}printf("\n");
using namespace std;

signed main (){
    int t=1;
    // sci(t);
    while (t--){
    int n,p=0,q;
    cin >> n;
    int a[n];
    f(i,0,n){
        cin >> a[i];
    }
    arraysort(a);
    q=a[0];
    f(i,0,n-1){
        if(a[i]!=a[i+1]){
            p=1;
            break;
        }
    }
    if(p==0 && q!=0){
        cout << 1 << endl;
        continue;
    }
    if(p==0 && q==0){
        cout << 0 << endl;
        continue;
    }
    else{
        cout << 2 << endl;
        continue;
    }


  }
}