#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"    
#define printarray(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}cout<<endl;
#define inputarray(a, n)  f(i, 0, n) { scanf("%d",a[i]); }
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n,p=0,q=1,a,b,c,d,a1,a2,a3,a4;
        cin >> n >> a1 >> a2 >> a3 >> a4;
        a=a1-a2;
        b=a1+a2;
        c=a3-a4;
        d=a3+a4;
        if(d<n*a || c>n*b){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
}