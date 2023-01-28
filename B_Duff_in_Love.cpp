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

vector<int> div(int n){
    vector<int>v;
    f(i,1,sqrt(n)+1){
        if(n%i==0){
            if(i*i==n){
                v.pb(i);
            }
            else{
                v.pb(i);
                v.pb(n/i);
            }
        }
    }
    return v;
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
//   cin >> t;
  while (t--){
    int n, p, k, m=0, q, x, y;
    cin >> n;
    vector<int>divi=div(n);
    sort(all(divi));
    reverse(all(divi));
    for(auto i: divi){
        p=0;
        vector<int>v=div(i);
        for(auto j: v){
            if(j==1){
                continue;
            }
            else if(i%(j*j)==0){
                p=1;
                break;
            }
        }
        if(p==0){
            cout << i << endl;
            break;
        }
    }

    }
}


