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
#define mod 1000000007

int solve(int i, int m,int n,vector<int>&a, vector<vector<int>>&dp){
    if(m==0){
        return 1;
    }
    if(i==n){
        return 0;
    }
    if(dp[i][m]!=-1){
        return dp[i][m];
    }
    int take=0,nottake = 0;
    if(m>=a[i]){
        take = solve(i,m-a[i],n,a,dp);
        nottake = solve(i+1,m,n,a,dp);
    }
    else{
        dp[i][m]=0;
    }
    return dp[i][m] = (take + nottake)%mod;
}

signed main (){
    ios_base::sync_with_stdio(false);
    def __init__
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n >> m;
        vector<int>a(n,0);
        inputarray(a,n);
        sort(all(a));
        vector<vector<int>>dp(n,vector<int>(m+1,-1));
        cout << solve(0,m,n,a,dp) << endl;
        
    }
}