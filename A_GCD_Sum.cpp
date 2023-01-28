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

int sumofdigits(int n){
    int sum=0;
    while (n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--){
    int i, n, p, q, r, x, y;
    cin >> n;
    while(__gcd(n,sumofdigits(n))==1){
        n++;
    }
    cout << n << endl;
    
  }
}
