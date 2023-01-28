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
//   cin >> t;
  while (t--){
    int n, p=0, r, j, x=0, y;
    cin >> n;
    int a[n];
    inputarray(a,n);
    int f[3]={0};
    f(i,0,n){
        if(a[i]==25){
            f[0]++;
            continue;
        }
        if(a[i]==50&&f[0]>0){
            f[0]--;
            f[1]++;
            continue;
        }
        if(a[i]==100&&f[0]>2&&f[1]==0){
            f[0]-=3;
            f[2]++;
            continue;
        }
        if(a[i]==100&&f[0]>0&&f[1]>0){
            f[0]--;
            f[1]--;
            f[2]++;
            continue;
        }
        if(a[i]==100&&f[0]==0&&f[i]>=0){
            p=1;
            break;
        }
        if(a[i]==50&&f[0]==0){
            p=1;
            break;
        }
        else{
            p=1;
            break;
        }
    }
    if(p==1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
  }
}
