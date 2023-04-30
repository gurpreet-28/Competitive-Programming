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

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    for (auto case_num = 1; case_num <= T; ++case_num){
        int n ,ans=1e9;
        string s;
        cin >> s;
        n = s.length();
        map<int, char> map;
        map[0] = 'R';
        map[1] = 'P';
        map[2] = 'S';
        for (int k = 0; k < 3; k++){
            vector<int>dp[n+1];
            f(i,0,n+1){
                f(j,0,3){
                    dp[i].pb(1e9);
                }
            }
            if (s[0] == map[k]){
                dp[0][k] = 0;
            }
            else{
                dp[0][k] = 1;
            }
            f(i, 1, n){
                f(j, 0, 3){
                    dp[i][j] = min(dp[i - 1][(j + 1) % 3], dp[i - 1][(j + 2) % 3]);
                    if (map[j] != s[i]){
                        dp[i][j]++;
                    }
                }
            }
            f(j, 0, 3){
                if (j != k){
                    ans = min(ans, dp[n - 1][j]);
                }
            }
        }
        cout << "Case #" << case_num << ": " << ans << endl;
    }
}