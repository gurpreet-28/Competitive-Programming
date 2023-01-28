

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
    int n, k, r, x=0, y, p=0, z=0, ans=0;
    cin >> n;
    int a[n];
    inputarray(a,n);
    f(i,0,n){
        if(a[i]==1){
            x++;
        }
        else{
            z++;
        }
    }
    f(i,0,n-1){
        if(a[i]==1 && a[i+1]==0){
            p++;
        }
    }
    if(z==n){
        cout << 0 << endl;
        continue;
    }
    else{
        // y=x-p;
        // if(y>2){
        //     cout << p+1 << endl;
        // }
        // else{
        //     for(int i=n-1;i>0;i--){
        //         if(a[i]==1 && a[i-1]==0){
        //             p++;
        //         }
        //     }
        //     cout << p << endl;
        // }
        if(z>x){
            cout << x << endl;
        }
        else{
            y=min(x,z);
            r=x-z;    
            cout << z+(r/3) << endl;
        }
    }
  }
}
