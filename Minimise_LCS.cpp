

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

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
  cin >> t;
  while (t--){
    int n, k, r, x=0, y, p=-1, z=0, ans=0;
    cin >> n;
    string s,w;
    cin >> s >> w;
    unordered_map<char,int>f1;
    unordered_map<char,int>f2;
    f(i,0,n){
        f1[s[i]]++;
        f2[w[i]]++;
    }
    for(char c='a';c<='z';c++){
        f1[c]=min(f1[c],f2[c]);
    }
    for(char c='a';c<='z';c++){
        ans=max(f1[c],ans);
    }
    cout << ans << endl;
    }
}
