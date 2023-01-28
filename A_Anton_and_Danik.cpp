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
    int n, a, b, m, p=0, q, r, j, x, y;
    cin >> n;
    string s;
    cin >> s;
    q=0;
    f(i,0,n){
        if(s[i]=='A'){
            p++;
        }
        else{
            q++;
        }
    }
    if(p>q){
        cout << "Anton" << endl;
    }
    else if(p<q){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
  }
}
