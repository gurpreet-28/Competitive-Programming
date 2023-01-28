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
    int n, p=1, q=0, r , g , b , ans=1, y=0;
    cin >> r >> g >> b;
    ans=min(r,ans)+min(g,ans)+min(b,ans);
    r=max(r-1,q);
    b=max(b-1,q);
    g=max(g-1,q);
    // r--,b--,g--;
    int a[3];
    a[0]=r;
    a[1]=g;
    a[2]=b;
    sort(a,a+3);
    if(a[0]==1&&a[1]==1&&a[2]==1){
        ans+=1;
        cout << ans << endl;
        continue;
    }
    if((a[0]==0&&a[1]==0)&&a[2]>0){
        cout << ans << endl;
        continue;
    }
    if(a[0]==0&&a[1]>0&&a[2]>0){
        ans++;
        cout << ans << endl;
        continue;
    }
    if(a[0]==1&&a[1]>1&&a[2]>1){
        ans+=2;
        cout << ans << endl;
        continue;
    }
    if(a[0]==1&&a[1]==1&&a[2]>1){
        ans+=2;
        cout << ans << endl;
        continue;
    }
    if(a[0]>1&&a[1]>0&&a[2]>0){
        ans+=3;
        cout << ans << endl;
        continue;
    }
    cout << ans << endl;
        
  }
}
