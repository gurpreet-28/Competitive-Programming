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
    int n, p=0,q, r, j, x, y,ans;
    cin >> n;
    int a[n];
    inputarray(a,n);
    unordered_map<int,int>f;
    arraysort(a);
    int b[n];
    f(i,0,n){
        b[i]=a[i];
    }
    // f(i,0,n){
    //     f[a[i]]++;
    // }
    // p=f[1];
    int res=0;
    f(k,0,n+1){
        x=0;
        ans=0;
        f(i,0,n){
            if(a[i]<=k){
                x=i;
            }
        }   
        int z=k;
        q=0; 
        for(int j=x;j>=0;j--){
            if(a[j]<=z){
                ans++;
                a[q]+=z;
                z--;
                q++;
            }
        }
        f(i,0,n){
            a[i]=b[i];
        }

        if(ans>=k){
            res=ans;
        }

    }
    cout << res << endl;
    }
}