#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
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
    int n,p=0,q,m;
    cin >> n >> m;
    int a[n];
    inputarray(a,n);
    p=a[0];
    q=a[0];
    int ans=0;
    f(i,0,n){
        if(p<a[i]){
            p=a[i];
        }
        if(q>a[i]){
            q=a[i];
        }
        if((p-q)>2*m){
            ans++;
            q=p=a[i];
        }
    }
    cout << ans << endl;
    }
}