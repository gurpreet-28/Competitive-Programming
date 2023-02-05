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
        int a[n];
        inputarray(a,n);
        f(i,0,n-1){
            if(a[i]==-1 && a[i+1]==-1){
                p=1;
                a[i]=1;
                a[i+1]=1;
                break;
            }
        }
        if(p==0){
            if(a[n-1]==-1){
                a[n-2]*=-1;
                a[n-1]*=-1;
                p=1;
            }
            if(p==0){
                f(i,0,n-1){
                    if(a[i]==-1){
                        a[i+1]=-1;
                        a[i]=1;
                        p=1;
                        break;
                    }
                }
            }
        }
        if(p==0){
            a[1]*=-1;
            a[0]*=-1;
        }
        int s=0;
        f(i,0,n){
            s+=a[i];
        }
        cout << s << endl;
    }
}