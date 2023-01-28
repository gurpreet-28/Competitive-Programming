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
    return ((a*b)/__gcd(a,b));
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
  cin >> t;
  while (t--){
    int n, p, k, m=0, q, x, y;
    cin >> n ;
    vector<int>v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i*i==n)
                v.pb(i);
            else{
                v.pb(i);
                v.pb(n/i);
            }
        }
    }
    sort(all(v));
    p=lcm(1,n-1);
    x=1,y=n-1;
    // printarray(v,v.size());
    f(i,0,v.size()-1){
        if(lcm(v[i],n-v[i])<p){
            p=lcm(v[i],n-v[i]);
            x=v[i];
            y=n-v[i];
        }
    }
    cout << x << " " << y << endl;
    }
}

// 1 2 4 5 10 20