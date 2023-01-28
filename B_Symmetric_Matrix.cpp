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
        int m,n,p=0,q;
        cin >> n >> m;
        q=n;
        while (q--){
            int a[2][2];
            cin >> a[0][0];
            cin >> a[0][1];
            cin >> a[1][0];
            cin >> a[1][1];
            if(a[1][0]==a[0][1]){
                p=1;
            }
        }
        if(p==1 && m%2==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
}