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
    int n, k, r, x, y, o=0, z=0;
    cin >> n >> k;
    int a[n],m[k];
    inputarray(a,n);
    arraysort(a);
    vector<int>v;
    int j=1;
    unordered_map<int,int>f;
    f(i,0,n){
        f[a[i]]++;
    }
    f(i,1,2*n+1){
        if(f[i]==0){
            v.pb(i);
        }
    }
    // printarray(v,v.size());
    int sum=0,s=0;
    if(a[n-1]==2*n){
        f(i,0,k){
            sum+=(a[n-1]-v[i]);
        }
        cout << sum << endl;
    }
    else{
        int temp=a[n-1];
        f(i,0,k){
            if(v[i]>temp){
                temp=v[i];
            }
            sum+=(temp-v[i]);
        }
        temp=v[v.size()-1];
        f(i,0,k-1){
            s+=(temp-v[i]);
        }
        cout << max(sum,s) << endl;
    }
    }
}