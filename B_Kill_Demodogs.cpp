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
        int n, m=1e9+7, p=0, q;
        cin >> n;
        int ans=0;
        if(n%3==2){
            ans=(2*n+1)/3;
            ans*=(n*(n+1))%m;
            ans%=m;
        }  
        else{
            ans=((n*(n+1))/3)%m;
            ans*=(2*n+1);
            ans%=m;
        }
        ans-=(n*(n+1))/2;
        ans%=m;
        ans*=2022;
        ans%=m;
        if(ans<0){
            ans+=m;
        }
        cout << ans << endl;
    }
}