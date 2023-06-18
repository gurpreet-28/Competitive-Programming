#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a,n)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

int solve(int a[], int i, int sum, int num, int k, vector<vector<int>>& dp,int n){
    if(sum>k || i==n){
        return 0;
    }
    if(dp[i][num]!=-1){
        return dp[i][num];
    }
    int a1=0,b=0;
    a1=num*a[i]+solve(a,i+1,sum+num, num ,k,dp,n);
    b=num*a[i]+solve(a,i+1,sum+num+1, num+1 ,k,dp,n);
    int c=0;
    f(j,1,num){
        c=max(c,num*a[i]+solve(a,i+1,sum+j, j ,k,dp,n));
    }
    return dp[i][num]=max({a1,b,c});
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, p=0, q;
    cin >> n >> k;
    int a[n];
    inputarray(a,n);
    vector<vector<int>>dp(n,vector<int>(k+1,-1));
    vector<vector<int>>dp1(n,vector<int>(k+1,-1));
    cout << solve(a,0,0,0,k,dp,n) << endl;
}