#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n,p=0,q,ans=0;
        cin >> n;
        int a[n];
        inputarray(a,n);
        int f[3]={0};
        f(i,0,n){
            a[i]%=3;
            f[a[i]]++;
        }
        ans+=f[0];
        f[0]=0;
        p=min(f[1],f[2]);
        ans+=p;
        f[1]=abs(f[1]-p);
        f[2]=abs(f[2]-p);
        ans+=f[1]/3;
        ans+=f[2]/3;
        cout << ans << endl;
    }
}