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
        int n, m, p=0, q=0;
        cin >> n;
        int a[n],b[n];
        inputarray(a,n);
        inputarray(b,n);
        f(i,0,n){
            if(a[i]!=b[i]){
                q=1;
                break;
            }
        }
        if(q==1){
            f(i,0,n){
                if(a[i]==1 && b[i]==0){
                    p=1;
                    break;
                }
            }
            int s=accumulate(a,a+n,0);     
            int s1=accumulate(b,b+n,0);
            if(s==0 && s1!=0){
                p=1;
            }
        }
        if((b[0]==1 and a[0]==0) or (b[n-1]==1 and a[n-1]==0)){
            p=1;
        }
        if(p==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}