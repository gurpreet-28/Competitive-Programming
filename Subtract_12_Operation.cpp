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
  int t;
  sci(t);
  while (t--){
    int n,p,q;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    // for(int i=n-2;i>=0;i--){
    //     if(a[i]==0 && a[i+1]>0){
    //         if(a[i+1]%2==0){
    //             a[i]=a[i]-(a[i+1]/2);
    //             a[i+1]=0;
    //         }
    //         else{
    //             a[i]=a[i]-(a[i+1]/2);
    //             a[i+1]=1;
    //         }
    //         continue;
    //     }
    //     if(a[i]==1 && a[i]>0){
    //         a[i]=0;
    //         a[i+1]=a[i+1]-2;
    //         continue;
    //     }
    //     if(a[i]<0 && a[i+1]<0){
    //         continue;
    //     }
    //     if(a[i]>0 && a[i+1]<0){
    //         continue;
    //     }
    //     if(a[i]<0 && a[i+1]>0){
    //         if(a[i+1]%2==0){
    //             a[i]=a[i]-(a[i+1])/2;
    //             a[i+1]=0;
    //         }
    //         else{
    //             a[i]=a[i]-(a[i+1])/2;
    //             a[i+1]=1;
    //         }
    //         continue;
    //     }
    //     if(a[i]>0 && a[i+1]>0){
    //         if(a[i+1]>=2*a[i]){
    //             a[i+1]=a[i+1]-(2*a[i]);
    //             a[i]=0;
    //         }
    //         else{
    //             if(a[i+1]%2==0){
    //             a[i]=a[i]-(a[i+1])/2;
    //             a[i+1]=0;
    //              }
    //             else{
    //             a[i]=a[i]-(a[i+1])/2;
    //             a[i+1]=1;
    //             }
    //         }
    //         continue;
    //     }
    //     // cout << a[i] << " " << a[i+1] << endl;
    // }

    for(int i=n-2;i>=0;i--){
        if(a[i+1]>1){
            a[i]=a[i]-a[i+1]/2;
            if(a[i+1]%2==0){
                a[i+1]=0;
            }
            else{
                a[i+1]=1;
            }
        }
    }
    if(n>=2){
    if(a[0]>=2 && a[1]==1){
        a[0]=a[0]-1;
        a[1]=-1;
    }
    }
    for(int i=0;i<n-1;i++){
        if(a[i]==1 && a[i+1]==1){
            a[i]=0;
            a[i+1]=-1;
        }
    }
    
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=abs(a[i]);
        // cout << a[i] <<" ";
    }    
    // cout << endl;
    cout << sum << endl;

    }
}