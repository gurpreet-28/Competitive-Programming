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
        int a[n][n-1];
        f(i,0,n){
            f(j,0,n-1){
                cin >> a[i][j];
            }
        }   
        int c1=0,c2=0,x=a[0][0],y;
        for(int i=0;i<n;i++){
            if(a[i][0]==x){
                c1++;
                p=i;
            }
            else{
                y=a[i][0];
                c2++;
                q=i;
            }
        }
        // cout << p << " " << q << endl;
        if(c1==1){
            cout << y << " ";
            f(i,0,n-1){
                cout << a[p][i] << " ";
            }
            cout << endl;
        }
        else{
            cout << x << " ";
            f(i,0,n-1){
                cout << a[q][i] << " ";
            }
            cout << endl;
        }
    }
}
