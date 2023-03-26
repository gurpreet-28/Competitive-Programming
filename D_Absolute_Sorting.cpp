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
  int t = 1;
  cin >> t;
  while (t--)
  {
    int n,p=0,q;
    cin >> n;
    int a[n];
    inputarray(a,n);
    int ans1=0,ans2=1e9;
    f(i,0,n-1){
        int x=a[i],y=a[i+1];
        if(x<y){
            ans2=min(ans2,(x+y)/2);
        }
        if(x>y){
            ans1=max(ans1,(x+y+1)/2);
        }
    }
    if(ans1<=ans2)
        cout << ans1 << endl;
    else
        cout << -1 << endl;
  }
}
