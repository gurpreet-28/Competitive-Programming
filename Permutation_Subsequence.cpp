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
        int n, p=1, q, mod=1e9+7, ans=0;
        cin >> n;
        int a[n];
        inputarray(a,n);
        map<int,int>m;
        f(i,0,n){
            m[a[i]]++;
        }
        f(i,1,1e5){
            if(m[i]==0){
                break;
            }
            p=p*m[i];
            p%=mod;
            ans+=p;
            // cout << p << " ";
            ans%=mod;
        }
        cout << ans << endl;


    }
}