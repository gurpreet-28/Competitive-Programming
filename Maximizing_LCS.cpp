	   					 		  	   				  			
#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;
int lcs(string s1, string s2,vector<vector<int>>&dp){
        for(int i=0;i<=s1.length();i++){
            for(int j=0;j<=s2.length();j++){
                if(i==0 || j==0)
                    dp[i][j]=0;
                else{
                    if(s1[i-1]==s2[j-1])
                        dp[i][j]=1+dp[i-1][j-1];
                    else
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
    return dp[s1.length()][s2.length()];
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    { 
    int n, k;
    cin >> n;
    string s,w;
    cin >> s;
    w=s;
    reverse(all(w));
    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    int ans=lcs(s,w,dp);
    cout << dp[n][n]/2 << endl;
    }
}