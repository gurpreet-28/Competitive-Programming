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
    cin >> t;
    while (t--){
        int n, m, p=0, q,ans=0;
        cin >> n;
        int a[n];
        inputarray(a,n);
        
        for(int i=n-1;i>=0;i--){
            if(a[i]==0){
                p++;
            }
            else{
                ans+=p;
            }
        }
        int res = ans;
        p=0;
        ans=0;
        int b[n];
        f(i,0,n){
            b[i]=a[i];
        }
        f(i,0,n){
            if(a[i]==0){
                a[i]=1;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(b[i]==1){
                b[i]=0;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(b[i]==0){
                p++;
            }
            else{
                ans+=p;
            }
        }
        res = max(ans,res);
        p=0;
        ans=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]==0){
                p++;
            }
            else{
                ans+=p;
            }
        }
        cout << max(res,ans) << endl;
    }
}