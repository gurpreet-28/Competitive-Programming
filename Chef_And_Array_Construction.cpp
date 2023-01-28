#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--){
    int n, p=0, m, q,o=0, r, j, x, y;
    cin >> m >> n;
    int a[n][n],b[n][n],c[n][n];
    f(i,0,n){
        f(j,0,n){
            a[i][j]=j+1;
        }
    }
    f(i,0,n){
        f(j,0,n){
            b[i][j]=i+1;
        }
    }
    f(i,0,n){
        f(j,0,n){
            c[i][j]=(a[i][j]&b[i][j]);
        }
    }
    // f(i,0,n){
    //     f(j,0,n){
    //         cout << b[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    f(i,0,n){
        f(j,0,n){
            p+=c[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    cout << p << endl;
    
    
    
    
    
    }
}
