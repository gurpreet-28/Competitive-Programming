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

vector<pair<int,char>>Substring(string s)
{
    char c,p;
    int ans = 1, temp = 1, q;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            c=s[i];
            ++temp;
        }
        else {
            if(temp>ans){
                ans=temp;
                p=c;
                q=i-temp;
            }
            temp = 1;
        }
    }
    if(temp>ans){
        ans=temp;
        p=c;
    }
    vector<pair<int,char>>v;
    v.pb({ans,p});
    return v;
}
 
signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
  cin >> t;
  while (t--){
    int n,m, p=0, q, r, j, x, y;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<int,char>>v=(Substring(s));
    cout << v[0].first << " " << v[0].second << endl;
    
    }
}