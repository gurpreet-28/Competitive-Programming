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

vector<int> printDivisors(int n){
  vector<int>v;
  for (int i=1; i<=sqrt(n); i++){
  if (n%i == 0){
    if (n/i == i)
      v.pb(i);
    else{
      v.pb(i);
      v.pb(n/i);
      }
    }
  }
  sort(all(v));
  return v;
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
  cin >> t;
  while (t--){
    int n, p=0, m, a,b,q=0, r, j, x=0, y;
    cin >> n;
    vector<int>div=printDivisors(n);
    if(div.size()==2){
        cout << 1 << " " << n-1 << endl;
        continue; 
    }
    // printarray(div,div.size());
    p=div[div.size()-2];
    q=n/p;
    if(q%2==0){
        a=q/2;
        b=q-a;
    }
    else{
        a=1;
        b=q-1;
    }
    cout << a*p << " " << b*p << endl;

   }
}