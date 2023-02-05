#include <bits/stdc++.h>
// #define int               long long
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
        int n, m, q=2;
        cin >> n;
        int a[n];  
        int i=1,c=n,p=1,r=0;
        a[0]=0;
        while(i<n){
            if(p==1){
                int x=q;
                for(;x!=0 && i<n;i++){
                    a[i]=p;
                    x--;
                }
                r++;
                if(r==2){
                    r=0;
                    p=0;
                }
            }
            else{
                int x=q;
                for(;x!=0 && i<n;i++){
                    a[i]=p;
                    x--;
                }
                r++;
                if(r==2){
                    r=0;
                    p=1;
                }
            }
            q++;
        }
        // printarray(a,n);
        int wa=0,ba=0,wb=0,bb=0;
        f(i,0,n){
            if(a[i]==1){
                if(i%2==0){
                    wb++;
                }
                else{
                    bb++;
                }
            }
            else{
                if(i%2==0){
                    wa++;
                }
                else{
                    ba++;
                }
            }
        }
        cout << wa << " " << ba << " " << wb << " " << bb << endl;
    }
}