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

int solve(int i, int prev, int n ,int a[], vector<vector<int>>&dp){
    if(i==n){
        return 0;
    }
    if(dp[i][prev]!=-1){
        return dp[i][prev];
    }
    if(a[i]==0){
        
        return dp[i][prev] = 1+solve(i+1,0,n,a,dp);
    }
    else if(a[i]==1){
        if(prev==1){
            dp[i][prev] = 1+solve(i+1,0,n,a,dp);
        }
        else{
            dp[i][prev] = solve(i+1,1,n,a,dp);
        }
        return dp[i][prev];
    }
    else if(a[i]==2){
        if(prev==2){
            dp[i][prev] = 1+solve(i+1,0,n,a,dp);
        }
        else{
            dp[i][prev] = solve(i+1,2,n,a,dp);
        }
        return dp[i][prev];
    }
    else{
        if(prev==1){
            dp[i][prev] = min(1+solve(i+1,0,n,a,dp),solve(i+1,2,n,a,dp));
        }
        else if(prev==2){
            dp[i][prev] = min(1+solve(i+1,0,n,a,dp),solve(i+1,1,n,a,dp));
        }
        else{
            dp[i][prev] = min(solve(i+1,2,n,a,dp),solve(i+1,1,n,a,dp));
        }
        return dp[i][prev];
    }
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        vector<vector<int>>dp(n,vector<int>(3,-1));
        cout << solve(0,0,n,a,dp) << endl;
    }
}