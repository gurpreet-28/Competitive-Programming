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
  int t;
  cin >> t;
  while (t--){
    int n, b, a=0, sub=0, r, x, y;
    cin >> n; 
    string s,w="",ans="";
    cin >> s;
    f(i,0,n){
        if(s[i]>='0' && s[i]<='9'){
            w+=s[i];
        }
        if(s[i]=='+'){
            a++;
        }
        if(s[i]=='-'){
            sub++;
        }
    }
    sort(all(w));
    f(i,0,w.length()){
        if(sub==0){
            r=i;
            break;
        }
        ans+=w[i];
        if(sub>0){
            ans+='-';
        }
        sub--;
    }
    f(i,r,w.length()){
        ans+=w[i];
        if(a>0){
            ans+='+';
        }
        a--;
    }
    reverse(all(ans));
    cout << ans << endl;

    }
}
