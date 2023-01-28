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
    int n, p=0, q, r, j, x, y;
    cin >> n;
    n*=2;
    int a[n],b[n];
    inputarray(a,n);
    unordered_map<int,int>m;
    f(i,0,n){
        m[a[i]]++;
        if(m[a[i]]==3){
            p=1;
            break;
        }
    }
    if(p==1){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }

  }
}