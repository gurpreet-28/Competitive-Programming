#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,p,q,r,x,y,k,c;
    cin >> n >> k >> r >> c;
    char a[n][n];
    f(i,0,n){
        f(j,0,n){
            a[i][j]='.';
        }
    }
    r--;
    c--;
    a[r][c]='X';
    p=r;
    q=c;
    x=r,y=c;
    while(x<n && y>=0){
        a[x][y]='X';
        x++;
        y--;
    }
    while(p>=0 && q<n){
        a[p][q]='X';
        p--;
        q++;
    }
    x--,y++,p++,q--;
    for(int j=0;j<n;j++){
        a[x][(j+y+k)%n]='X';
    }
    f(i,0,n){
        f(j,0,n){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

  }
}