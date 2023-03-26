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
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        int n, m, p=0, k, q;
        cin >> n >> k;
        int a[n];
        inputarray(a,n);
        vector<int>dp(n,0);
        dp[0]=0;
        for(int i=1;i<n;i++){
            int mini=INT_MAX;
            for(int j=1;j<=k;j++){
                if(i-j>=0)
                mini=min(dp[i-j]+abs(a[i]-a[i-j]),mini);
            }
            dp[i]=mini;
        }
        cout << dp[n-1] << endl;
    }
}