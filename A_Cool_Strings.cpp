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

void solve(){
    int n, m, p=0, q;
    string s;
    cin >> s;
    n = s.length();
    vector<int>vis(26,0);
    string ans="";
    f(i,0,n){
        vis[s[i]-'a']++;
        p=max(vis[s[i]-'a'],p);
    }
    f(i,0,26){
        if(vis[i]!=p){
            vis[i]=0;
        }
        else{
            vis[i]=1;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(vis[s[i]-'a']==1){
            ans+=s[i];
            vis[s[i]-'a']--;
        }
    }
    reverse(all(ans));
    cout << ans << endl;
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