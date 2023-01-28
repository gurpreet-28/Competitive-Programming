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
    int t = 1;
    cin >> t;
    while (t--){
        int n, p = 0, m, q=0;
        cin >> n >> m;
        int ans=n*m;
        int t_n=0,f_n=0;
        int t1=n;
        while(t1%2==0){
            t_n++;
            t1/=2;
        }
        while(t1%5==0){
            f_n++;
            t1/=5;
        }
        p=1;
        q=abs(t_n-f_n);
        if(t_n>f_n){
            while(q-- && p*5<=m){
                p*=5;
            }
            while(p*10<=m){
                p*=10;
            }
            m/=p;
            p*=m;
            cout << p*n << endl;
        }
        else if(t_n<f_n){
            while(q-- && p*2<=m){
                p*=2;
            }
            while(p*10<=m){
                p*=10;
            }
            m/=p;
            p*=m;
            cout << p*n << endl;
        }
        else{
            while(p*10<=m){
                p*=10;
            }
            m/=p;
            p*=m;
            cout << p*n << endl;
        }
    }
}
