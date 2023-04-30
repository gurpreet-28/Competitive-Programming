#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

void solve(){
    int n, m, p=0, q;
    cin >> n;
    int a[n];
    inputarray(a,n);
    if(n==1){
        cout << 0 << endl;
        return;
    }
    int j=1;
    for(int j=1;j<n;j*=2){
        int i=0;
        int mini=INT_MAX,maxi=0;
        while(i<n){
            mini=INT_MAX,maxi=0;
            int k=2*j;
            while(k--){
                maxi=max(a[i],maxi);
                mini=min(a[i],mini);
                i++;
            }
            if((maxi-mini)>=2*j){
                cout << -1 << endl;
                return;
            }
        }
    }
    int ans=0;
    for(int j=1;j<n;j*=2){
        int i=0;
        int maxi2=0,maxi1=0;
        while(i<n){
            maxi1=0,maxi2=0;
            int k=j;
            while(k--){
                maxi1=max(a[i],maxi1);
                i++;
            }
            k=j;
            while(k--){
                maxi2=max(a[i],maxi2);
                i++;
            }
            if(maxi1>maxi2){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        solve();
    }
}