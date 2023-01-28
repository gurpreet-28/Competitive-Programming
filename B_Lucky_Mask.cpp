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

int digit(int n){
    int c=0;
    while(n!=0){
        c+=1;
        n/=10;
    }
    return c;
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
//   cin >> t;
  while (t--){
    int n, p,ans=0, k, m=0, q, x, y;
    cin >> n >> k;
    x=digit(n);
    y=digit(k);
    if(k>n){
        cout << k << endl;
    }
    else{
        if(x==y){
            cout << 1 << k << endl;
        }
        else{
            m=y;
            p=1;
            while(m--){
                p*=10;
            }
            n/=p;
            q=0;
            f(i,0,x-y){
                q+=(pow(10,i)*(n%10));
                n/=10;
            }
            q*=p;
            q+=k;
            cout << q << endl;
        }
    }
    }
}

