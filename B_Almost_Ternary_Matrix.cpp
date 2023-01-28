#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n,p=0,q,m;
        cin >> n >> m;
        int a[n][m];
        f(i,0,n){
            if(i%2==0){
                a[i][0]=1;
            }
            else{
                a[i][0]=0;
            }
            if(i%2==1){
                a[i][m-1]=1;
            }
            else{
                a[i][m-1]=0;
            }
        }
        f(i,0,n/2){
            f(j,1,m-1){
                // if((i+j)%2==1){
                //     a[i][j]=1;
                // }
                // else{
                    a[i][j]=0;
                // }
            }
        }
        f(i,n/2,n){
            f(j,1,m-1){
                // if((i+j)%2==1){
                //     a[i][j]=0;
                // }
                // else{
                    a[i][j]=1;
                // }
            }
        }
        f(i,0,n){
            f(j,0,m){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}