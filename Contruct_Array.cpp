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
        if(n%2){
            cout << -1 << endl;
            continue;
        }   
        p=1;     
        f(i,0,n/2){
            a[i]=p++;
        }
        p--;
        f(i,n/2,n){
            a[i]=p--;
        }
        f(i,0,n){
            if(i%2==1){
                a[i]*=-1;
            }
        }
        p=0;
        // f(i,0,n){
        //     cout << a[i]+p << " ";
        //     p+=a[i];
        // }
        cout << endl;
        int suf[n];
        p=0;
        for(int i=n-1;i>=0;i--){
            suf[i]=a[i]+p;
            p+=a[i];
        }
        reverse(suf,suf+n);
        // printarray(suf,n);
        printarray(a,n);
    }
}