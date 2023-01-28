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
    int n;
    cin >> n;
    string s,w="",c="";
    cin >> s;
    c=s;
    sort(all(c));
    if(c==s){
        cout << 0 << endl;
        continue;
    }
    w+=s[0];
    for(int i=1;i<n;i++){
        if(s[i-1]!=s[i]){
            w+=s[i];
        }
    }
    if(w.length()==1){
        cout << 0 << endl;
    }
    else{
        int o=0,z=0;
        f(i,0,w.length()){
            if(w[i]=='1'){
                o++;
            }
            else{
                z++;
            }
        }
    cout << w << endl;
        if(w[0]=='0' && w[w.length()-1]=='1'){
            cout << min(o,z) - 1 << endl;
            continue;
        }
        cout << min(o,z) << endl;
    }
    // cout << w << endl;
  }
}