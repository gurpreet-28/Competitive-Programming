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
        int n, m,e=0,o=0, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        f(i,0,n){
            if(a[i]%2==0){
                e++;
            }
            else{
                o++;
            }
        }
        if(e==n){
            cout << "NO" << endl;
            continue;
        }
        if(e>1 && o>0){
            cout << "YES" << endl;
            f(i,0,n){
                if(a[i]%2==0){
                    cout << i+1 << " ";
                    p++;
                }
                if(p==2){
                    break;
                }
            }
            f(i,0,n){
                if(a[i]%2==1){
                    cout << i+1 << " ";
                    break;
                }
            }
            cout << endl;
            continue;
        }
        if(o>=3){
            cout << "YES" << endl;
            f(i,0,n){
                if(a[i]%2==1){
                    cout << i+1 << " ";
                    p++;
                }
                if(p==3){
                    break;
                }
            }
            cout << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}