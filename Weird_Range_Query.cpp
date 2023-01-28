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
    int n,q;
    sci(n);
    sci(q);
    int a[n],presum[n]={0};
    f(i,0,n){
        sci(a[i]);
    }
    presum[0]=a[0];
    f(i,1,n){
        presum[i]=presum[i-1]+a[i];
    }
    // printarray(presum,n);
    for(int i=0;i<n;i++){
        a[i]=(n-i)*a[i];
    }
    int presum2[n]={0};
    presum2[0]=a[0];
    f(i,1,n){
        presum2[i]=presum2[i-1]+a[i];
    }
    // printarray(presum2,n);
    while (q--){
    int l,r,ans=0;
    sci(l);
    sci(r);
    ans=presum2[r-1]-presum2[l-1]-(r-n)*(presum[r-1]-presum[l-1]);
    pf(ans);
  }
}