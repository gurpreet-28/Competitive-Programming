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
int lcm(int a, int b){
    int g=__gcd(a, b);
    return a/g*b;
}
signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
  // cin >> t;
  while (t--){
    int n, p=0, q, r, j, x, y;
    cin >> n;
    int a[n][n];
    vector<int>ans;
    vector<int>v(n);
    f(i,0,n){
      f(j,0,n){
        cin >> a[i][j];
      }
    }
    int res[n];
  
    f(i,0,n-2){
      x=a[i][i+1]*a[i+1][i+2];
      y=a[i][i+2];
      res[i+1]=sqrt(x/y);
    }
    res[0]=a[0][1]/res[1];
    res[n-1]=a[0][n-1]/res[0];
    printarray(res,n);
  }
}
/*
11  12  13  14  15
21  22  23  24  25
31  32  33  34  35
41  42  43  44  45
51  52  53  54  55
*/