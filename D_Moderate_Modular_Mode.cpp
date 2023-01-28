// https://codeforces.com/problemset/problem/270/A

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
    int a,b,n,p=0,i, q=0, x, y,d,ps=0,ng=0;
    cin >> x >> y;
    if(x>y){
        p=x+y;
        cout << p << endl;
    }
    else{
        p=y/x;
        p*=x;
        p=(p+y)/2;
        cout << p << endl;
    }
    }
}