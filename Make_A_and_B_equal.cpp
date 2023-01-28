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
    int n;
    cin >> n;
    int a[n],b[n];
    f(i,0,n){
        cin >> a[i];
    }
    f(i,0,n){
        cin >> b[i];
    }
    vector<int>d(n);
    int sum=0;
    f(i,0,n){
        d[i]=a[i]-b[i];
        sum+=d[i];
    }
    if(sum!=0){
        cout << -1 << endl;
    }
    else{
        int p=0;
        f(i,0,n){
            if(d[i]>0){
                p+=d[i];
            }
        }
        cout << p << endl;
    }

    
    }
}   