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
    int n, p=0, q, r, j, x, y, o=0,z=0;
    cin >> n;
    string s;
    cin >> s;
    f(i,0,n){
        if(s[i]=='1'){
            o++;
        }
        else{
            z++;
        }
    }
    p=1;
    x=0;
    f(i,0,n-1){
        if(s[i]=='1' && s[i+1]=='1'){
            p++;
        }
        else{
            x=max(x,p);
            p=1;
        }
    }
    x=max(x,p);
    r=x*x;
    p=1;
    x=0;
    f(i,0,n-1){
        if(s[i]=='0' && s[i+1]=='0'){
            p++;
        }
        else{
            x=max(x,p);
            p=1;
        }
    }
    x=max(x,p);
    q=x*x;
    p=o*z;
    cout << max(p,max(q,r)) << endl;
    // cout << r << endl;
  }

}