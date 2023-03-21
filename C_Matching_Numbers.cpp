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
        int n, m, p=0, q;
        cin >> n;
        if(n%2==0){
            cout << "No" << endl;
        }        
        else{
            cout << "Yes" << endl;
            int a[n][2];
            p=1;
            f(i,0,n){
                f(j,0,2){
                    if(j==0){
                        a[i][j]=p++;
                    }
                    else{
                        a[i][j]=0;
                    }
                }
            }
            p=2*n;
            for(int i=0;i<n;i+=2){
                a[i][1]=p;
                p--;
            }
            for(int i=1;i<n;i+=2){
                a[i][1]=p;
                p--;
            }
            f(i,0,n){
            cout << a[i][0] << " " << a[i][1] << endl;
            }
        }

    }
}