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
        int c0=0,c1=0,c2=0;
        f(i,0,n){
            a[i]%=3;
            if(a[i]==0){
                c0++;
            }
            else if(a[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        if(c0==c1 and c1==c2){
            cout << 0 << endl;
        }
        else{
            cout << abs(c2-n/3)+abs(c1-n/3)+abs(c0-n/3)-1 << endl;
        }
        // printarray(a,n);
    }
}