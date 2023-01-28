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
    int n, p=0,cost=0, q, r, j, x, y,a,b,c;
    cin >> a >> b;
    if(a==1 && b!=1){
        cout << a << " " << b-1 << endl;
        continue;
    }
    if(a!=1 && b==1){
        cout << a-1 << " " << b << endl;
        continue;
    }
    if(a==1 || b==1){
        cout << a <<" " << b<< endl;
        continue;
    }
    else{
        cout << a-1 << " " << b-1 << endl;
    } 
  }
}
