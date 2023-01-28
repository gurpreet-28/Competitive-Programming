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
        int n,p=0,a,b,c,d,q;
        cin >> a >> b >> c >> d;
        if(a<=b){
            cout << max(a,b) << endl;
        }
        else if((c-d)<=0){
            cout << -1 << endl;
        }
        else{
            p=c-d;
            q=a-b;
            n=q/p;
            if(q%p!=0){
                n++;
            }
            cout << n*c + b << endl;
        }
    }
}