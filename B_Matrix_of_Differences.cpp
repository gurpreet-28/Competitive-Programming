#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
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
        int n,p=0,q,r;
        cin >> n;
        q=n*n;
        r=1;
        int a[n][n];
            f(i,0,n){
                f(j,0,n){
                    if(p==0){
                        a[i][j]=r;
                        r++;
                        p=1;
                    }
                    else{
                        a[i][j]=q;
                        q--;
                        p=0;
                    }
                }
            }   
        if(n%2==0){
            f(i,0,n){
                if(i%2==1){
                    int x=a[i][0];
                    f(j,0,n-1){
                        a[i][j]=a[i][j+1];      
                    }
                    a[i][n-1]=x;
                }
            }
        }    
        f(i,0,n){
            f(j,0,n){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        // set<int>s;
        // f(i,0,n){
        //     f(j,0,n-1){
        //         s.insert(abs(a[i][j]-a[i][j+1]));
        //     }
        // }
        // f(i,0,n){
        //     f(j,0,n-1){
        //         s.insert(abs(a[j][i]-a[j+1][i]));
        //     }
        // }
        // for(auto i:s){
        //     cout << i << " ";
        // }
        // cout << endl;
    }
}