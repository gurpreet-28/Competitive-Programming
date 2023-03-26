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
        int a[n][n];
        p=1;
        f(i,0,n){
            f(j,0,n){
                if(q==0){
                    a[i][j]=p;
                    p+=2;
                    if(p>n*n){
                        p=2;
                        q=1;
                    }
                }
                else{
                    a[i][j]=p;
                    p+=2;
                }
            }
        }
        f(i,0,n){
            f(j,0,n){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }        

    }
}