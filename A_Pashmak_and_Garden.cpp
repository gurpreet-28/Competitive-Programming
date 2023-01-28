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
    int n, p=0, a, b, c, q=0, r, j, w, x, y, z, d;
    cin >> a >> b >> c >> d;
    if(a!=c&&b==d){
        w=a;
        x=b+abs(c-a);
        y=c;
        z=d+abs(c-a);
        cout << w << " " << x << " " << y << " " << z << endl;
        return 0;
    }
    if(a==c&&b!=d){
        w=a+abs(d-b);
        x=b;
        y=c+abs(d-b);
        z=d;
        cout << w << " " << x << " " << y << " " << z << endl;
        return 0;
    }
    if(a!=c&&b!=d){
        w=a;
        x=d;
        y=c;
        z=b;
        r=abs(c-w);
        j=abs(d-b);
        
        if(r==j){
            cout << w << " " << x << " " << y << " " << z << endl;
            return 0;
        }
        else{
            cout << -1 << endl;
            return 0;
        }
    }
    else{
        cout << "-1" << endl;
        return 0;
        continue;
    }
  }
}
