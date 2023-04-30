#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
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
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n;
        int a[2][n];
        f(i,0,2){
            f(j,0,n){
                p++;
                a[i][j]=p;
            }
        }
        p=2*n;
        for(int j=0;j<n;j+=2){
            a[0][j]=p;
            p-=2;
        }
        p=2;
        for(int j=1;j<n;j+=2){
            a[0][j]=p;
            p+=2;
        }
        p=1;
        if(n%2==0){
            for(int j=0;j<n;j+=2){
                a[1][j]=p;
                p+=2;
            }
            for(int j=1;j<n;j+=2){
                a[1][j]=p;
                p+=2;
            }
        }
        else{
            for(int j=n-1;j>=0;j-=2){
                a[1][j]=p;
                p+=2;
            }
            for(int j=n-2;j>=0;j-=2){
                a[1][j]=p;
                p+=2;
            }
        }
        f(i,0,2){
            f(j,0,n){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}


