
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
    int n,m,p=0,i, q=0, x, y,ans=0;
    cin >> n >> m;
    p=min(n,m);
    q=max(n,m);
    n=p;
    m=q;
    if(n<=2 && m<=2){
        cout << 0 << endl;
        continue;
    }
    if(p==1 && q==3){
        cout << 0 << endl;
        continue;
    }
    if(p==2 && q==3){
        cout << 1 << endl;
        continue;
    }
    if(p==3 && q==3){
        cout << 2 << endl;
        continue;
    }
    while(n){
        p=n%5;
        q=5-p;
        ans+=((m-q)/5);
        ans++;
        n--;
    }
    cout << ans << endl;
    }
}