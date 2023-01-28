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
    int n, p=0, q, r, j, x, y, ans=0;
    cin >> n;
    string s,w="";
    cin >> s;
    if(n==1){
        cout << 0 << endl;
        continue;
    }
    f(i,0,n){
        if(s[i]=='1'){
            p=i;
            break;
        }
    }
    w+=s[p];
    for(int i=p;i<n-1;i++){
        if(s[i]!=s[i+1]){
            w+=s[i+1];
        }
    }
    for(int i=0;i<w.length()-1;i++){
        if(w[i]!=w[i+1]){
            ans++;
        }
    }
    // cout << w << endl;
    // if(s[n-1]=='1'){
    //     ans--;
    // }
    cout << ans << endl;
  }
}