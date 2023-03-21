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
        int n, m, p=0, q;
        cin >> n;
        int a[n][n];
        if(n==2){
            cout << -1 << endl;
        }        
        else{
            f(i,0,n){
                int temp=i+1;
                f(j,0,n){
                    if(temp>0){
                        a[i][j]=1;
                        temp--;
                    }
                    else{
                        a[i][j]=0;
                    }
                }
            }
            a[1][0]=0;
            f(i,0,n){
                f(j,0,n){
                    cout << a[i][j];
                }
                cout << endl;
            }
        }

    }
}