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
        int n,p=0,q,a,b;
        cin >> a >> b;     
        if(a<b){
            cout << 1 << endl;
            continue;
        }
        if(a==b){
            cout << 2 << endl;
            continue;
        }
        n=a;
        int ans=INT_MAX;
        f(i,b,sqrt(a)+1){
            p=0;
            n=a;
            p+=(i-b);
            if(i==1){
                i++;
                p++;
            }
            if(i==a){
                ans=min(ans,p+2);
                continue;
            }
            while(n>0){
                n/=i;
                p++;
            }
            ans = min(p,ans);
        }
        if(ans==INT_MAX){
            ans=2;
        }
        cout << ans << endl;
    }
}