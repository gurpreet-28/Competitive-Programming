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
    int n, p=0, q=0, r, j, x, y, e=0, o=0, sum=0;
    cin >> n >> q;
    int a[n],b[n];
    inputarray(a,n);
    f(i,0,n){
        sum+=a[i];
        if((a[i]&1)==0){
            e++;
        }
    }
    o=n-e;
    while(q--){
        cin >> r >> x;
        if(r==1){
            sum+=(x*o);
            if(x%2==1){
                e=n;
                o=0;   
                
            }
        }
        else{
            sum+=(x*e);
            if(x%2==1){
                e=0;
                o=n;   
            }
        }
        cout << sum << endl;
    }
  }
}
