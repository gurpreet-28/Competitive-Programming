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
        f(i,0,n){
            if(a[i]==2){
                p++;
            }
        }
        if(p==0){
            cout << 1 << endl;
            continue;
        }
        if(p%2==1){
            cout << -1 << endl;
        }
        else{
            p/=2;
            for(int i=0;i<n;i++){
                if(a[i]==2){
                    p--;
                }
                if(p==0){
                    p=i;
                    break;
                }
            }
            cout << p+1 << endl;
        }
    }
}