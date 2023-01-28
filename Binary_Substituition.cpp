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
    // cin >> n;
    string s;
    cin >> s;
    n=s.length();
    int a[n],b[n];
    a[n-1]=1;
    if(n==1){
        cout << 1 << endl;
        continue;
    }
    else{
        if(s[n-1]!=s[n-2]){
            a[n-2]=2;
        }
        else{
            a[n-2]=1;
        }
    for(int i=n-3;i>=0;i--){
        if(s[i+1]!=s[i]){
            a[i]=a[i+1]+a[i+2];
        }
        else{
            a[i]=a[i+1];
        }
    }
    cout << a[0] << endl;
    }
  }
}
