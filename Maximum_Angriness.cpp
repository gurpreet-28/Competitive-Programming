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
    int n, p,ans=0, k, m=0, q, x, y;
    cin >> n >> k;
    k=k%n;
    if(n==1){
        cout << 0 << endl;
        continue;
    }
    if(k>=n/2){
        cout << (n*(n-1))/2 << endl;
    }
    else{
        p=(n*(n-1))/2;
        q=n-k;
        p-=(q*(q-1)/2);
        q=n-2*k;
        p+=(q*2);
        p+=(k*(k-1)/2);
        cout << p << endl;
    }
    }
}


// 1 2 3 4 5 6 7
// 7 6 5 4 3 2 1
// 1 2 3 4 5 6 7
// 8 7 6 5 4 3 2 1
// 1 2 3 4 5 6 7 8
// 8 7 62 1 

