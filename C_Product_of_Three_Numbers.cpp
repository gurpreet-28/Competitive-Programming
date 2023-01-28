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
  int t;
  cin >> t;
  while (t--){
    int n, p=0, a, b, c, q=0, r, j, x, y;
    cin >> n;
    // inputarray(a,n);
    vector<int>v;
    f(i,2,sqrt(n)+1){
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
    sort(all(v));
    if(v.empty()){
        cout << "NO" << endl;
    }
    else{
        x=1;
        p=0;
        q=v.size();
        f(i,0,q){
            f(j,0,q){
                if(i==j){
                    continue;
                }
                f(k,0,q){
                    if(k==i||k==j){
                        continue;
                    }
                    if(v[i]*v[j]*v[k]==n){
                        p=1;
                        a=v[i];
                        b=v[j];
                        c=v[k];
                        break;
                    }
                }
                if(p==1){
                    break;
                }
            }
            if(p==1){
                break;
            }
        }
        if(p==1){
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    // printarray(v,v.size());
  }
}
