#include <bits/stdc++.h>
// #define int               long long
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
    int n, l=0,u=0, q, x, y;
    // cin >> n;
    string s,w="";
    cin >> s;
    n=s.length();
    f(i,0,n){
        if(s[i]>=97){
            l++;
        }
    }
    u=n-l;
    if(l>=u){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
  }
}
