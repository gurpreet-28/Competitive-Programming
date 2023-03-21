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
    // cin >> t;
    while (t--){
        int n, m, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        vector<int>dp(n,0);
        dp[0]=1;
        f(i,1,n){
            if(a[i]>a[i-1]){
                dp[i]=dp[i-1]+1;
            }
            else{
                dp[i]=1;
            }
        }        
        reverse(a,a+n);
        vector<int>dp1(n,0);
        dp1[0]=1;
        f(i,1,n){
            if(a[i]<a[i-1]){
                dp1[i]=dp1[i-1]+1;
            }
            else{
                dp1[i]=1;
            }
        }
        reverse(all(dp1));
        reverse(a,a+n);
        int mx=0;
        f(i,0,n-1){
            if(a[i]<a[i+1])
                mx=max(dp[i]+dp1[i+1],mx);
            else
                mx=max({dp[i],mx,dp1[i+1]});
        }
        f(i,0,n-2){
            if(a[i]<a[i+2])
                mx=max(dp[i]+dp1[i+2],mx);
            else
                mx=max({dp[i],mx,dp1[i+2]});
        }
        cout << mx << endl;
    }
}