#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
        int n, m, p=0;
        cin >> n;
        int a[n];
        inputarray(a,n);
        cin >> m;
        arraysort(a);
        f(i,0,m){
            int x,y;
            cin >> x >> y;
            int left=n+1,right=0;
            int l=0,r=n-1;
            while(l<=r){
                int m=l+(r-l)/2;
                if(a[m]<x){
                    l=m+1;
                }
                else{
                    left=min(m+1,left);
                    r=m-1;
                }
            }
            // cout << left << " ";

            l=0,r=n-1;
            while(l<=r){
                int m=l+(r-l)/2;
                if(a[m]<=y){
                    right=max(m+1,right);
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }
            // cout << right << endl;
            cout << max(0LL,right-left+1) << " ";
        }
        cout << endl;
        
    }
}