#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 1, n+1) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
//   cin >> t;
  while (t--){
    int n,k, p=-1, q=0, x, y;
    cin >> n;
    int a[n];
    inputarray(a,n);
    map<int,int>f;
    f(i,0,n){
        f[a[i]]++;
    }
    f(i,0,n){
        f(j,i+1,n){
            int k=a[i]+a[j];
            f[a[i]]--;
            f[a[j]]--;
            if(f[k]>0){
                x=i+1;
                y=j+1;
                // cout << x << " " << y << endl;
                p=k;
                break;
            }
            f[a[i]]++;
            f[a[j]]++;
        }
        if(p!=-1){
            break;
        }
    }
    if(p==-1){
        cout << -1 << endl;
    }
    else{
        for(int i=n-1;i>=0;i--){
            if(a[i]==p){
                cout << i+1 << " " << y << " " << x << endl;
                break;
            }
        }
    }
}
}
