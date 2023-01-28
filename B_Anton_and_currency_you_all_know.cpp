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
//   cin >> t;
  while (t--){
    int n;
    string s;
    cin >> s;
    n=s.length();
    vector<int>v;
    f(i,0,n){
        if((s[i]-'0')%2==0){
            v.pb(i);
        }
    }
    if(v.size()==0){
        cout << -1 << endl;
        continue;
    }
    int p=0;
    f(i,0,v.size()){
        if(s[v[i]]<s[n-1]){
            swap(s[v[i]],s[n-1]);
            p=1;
            break;
        }
    }
    if(p==1){
        cout << s << endl;
    }
    else{
        for(int i=v.size()-1;i>=0;i--){
            if(s[v[i]]>s[n-1]){
                swap(s[v[i]],s[n-1]);
                break;
            }
        }
        cout << s << endl;
    }
    }
}
