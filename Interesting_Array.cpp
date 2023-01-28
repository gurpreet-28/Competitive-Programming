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
    int n,m, p=0, q, r, j, x, y;
    cin >> n;
    int a[n],b[n],c[n];
    inputarray(a,n);
    arraysort(a);
    j=0;
    map<int,int>f;
    f(i,0,n){
        f[a[i]]++;
        if(f[a[i]]>(n+1)/2){
            p=1;
            break;
        }
    }
    vector<pair<int,int>>v;
    f(i,0,n){
        v.pb({f[a[i]],a[i]});
    }
    sort(all(v));
    reverse(all(v));
    f(i,0,n){
        a[i]=v[i].second;
    }
    if(p==1){
        cout << -1 << endl;
        continue;
    }
    f(i,0,n/2+1){
        b[j]=a[n-1-i];
        if(j<n-1)
            b[j+1]=a[i];
        j+=2;
    }
    p=1;
    j=0;
    f(i,0,n/2+1){
        c[j]=a[i];
        if(j<n-1)
            c[j+1]=a[n-1-i];
        j+=2;
    }
    p=0;
    // printarray(a,n);
    p=0;
        f(i,0,n-2){
            if(c[i]>=c[i+1] && c[i+1]>=c[i+2]){
                p=1;
                break;
            }
            if(c[i]<=c[i+1] && c[i+1]<=c[i+2]){
                p=1;
                break;
            }
        }
        if(p==0){
            printarray(c,n);
        }
        else{
        p=0;
        f(i,0,n-2){
            if(b[i]>=b[i+1] && b[i+1]>=b[i+2]){
                p=1;
                break;
            }
            if(b[i]<=b[i+1] && b[i+1]<=b[i+2]){
                p=1;
                break;
            }
        }
        if(p==0){
            printarray(b,n);
        }
        else{
            cout << -1 << endl;
        }
        }
    }
}