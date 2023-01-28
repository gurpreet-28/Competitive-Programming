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
    // cin >> t;
    while (t--){
        int n, m, p=0, q;
        cin >> n >> m;
        int a[n][m];
        int b[n][m];
        f(i,0,n){
            f(j,0,m){
                cin >> a[i][j];
                b[i][j]=a[i][j];
            }
        }
        if(a[n-1][m-1]==0){
            a[n-1][m-1]=INT32_MAX;
        }
        for(int i=m-2;i>=0;i--){
            if(a[n-1][i]==0){
                a[n-1][i]=a[n-1][i]-1;
            }
        }
        for(int i=n-2;i>=0;i--){
            for(int j=m-2;j>=0;j--){
                if(a[i][j]==0){
                    a[i][j]=min(a[i+1][j]-1,a[i][j+1]-1);
                }    
            }
        }
        f(i,0,n){
            f(j,0,m-1){
                if(a[i][j]>=a[i][j+1]){
                    p=1;
                    break;
                }
                
            }
            if(p==1){
                break;
            }
        }
        if(p==0){
            f(i,0,n-1){
                f(j,0,m){
                    if(a[i][j]>=a[i+1][j]){
                        p=1;
                        break;
                    }
                    
                }
                if(p==1){
                    break;
                }
            }
        }
        if(p==1 || b[n-1][m-1]==0){
            cout << -1 << endl;
        }
        else{
            int ans=0;
            f(i,0,n){
                f(j,0,m){
                    ans+=a[i][j];       
                }
            }
            cout << ans << endl;
        }



    }
}