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
    int t=1;
    cin >> t;
    while (t--){
        int n, p=-1, q, k, r, j, x, y;
        cin >> n >> k;
        int a[n]={0};
        if(n%k==0){
            cout << k << endl;
            int p=0;
            f(i,0,n){
                a[i]=(p%k)+1;
                p++;
            }
            printarray(a,n);
        }
        else{
            if(n<2*k){
                p=(n/k)*k;
                q=n-p;
                cout << k+q << endl;
                r=0;
                f(i,0,p){
                    a[i]=(r%k)+1;
                    r++;
                }
                r=k+1;
                f(i,p,n){
                    a[i]=r++;
                }
                printarray(a,n);
            }
            else{
                p=n/k;
                q=n-(p*k);
                if(p>q){
                    x=k+1;
                }
                else{
                    if(q%p==0)
                        y=(q/p);
                    else    
                        y=(q/p)+1;
                    x=k+y;
                }
                cout << x << endl;
                r=1;
                f(i,0,n){
                    if(r>x){
                        r=1;
                    }
                    a[i]=r++;
                }
                printarray(a,n);
            }
        }
    }
}