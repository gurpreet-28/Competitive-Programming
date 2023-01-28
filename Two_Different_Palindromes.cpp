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
    int i, n, p=0, a, b, q=0, r, x, y;
    cin >> a >> b;
    if(a%2==1&&b%2==1){
        cout << "No" << endl;
        continue;
    }
    else{
        if(a+b==3){
            cout << "No" << endl;
            continue;
        }
        if(a==1 || b==1){
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
    }
    }
}
