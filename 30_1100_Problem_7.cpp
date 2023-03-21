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
        cin >> n >> m;
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        int ans=1;
        while(ans<=m){
            ans*=2;
            p++;
        }       
        q=n-pow(2,p);
        if(q<=0){
            cout << p << endl;
            continue;
        }
        cout << p+(q+m-1)/m<< endl; 
    }
}