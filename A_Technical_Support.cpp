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
    int n, p=0, q, r, j, x, y;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char,int>f;
    f(i,0,n){
        if(s[i]=='Q'){
            f[s[i]]++;
        }
        else{
            f['Q']= max(p,f['Q']-1);
        }
    }
    // cout << f['Q'] << endl;
    if(f['Q']==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }



  }
}