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
    int n, p=0,i, q, x, y,d,ps=0,ng=0;
    cin >> n;
    int a[n];
    inputarray(a,n);
    if(n%2==1){
        cout << -1 << endl;
        continue;
    }
    f(i,0,n){  
        if(a[i]>0){
            ps++;
        }
        else{
            ng++;
        }
    }
    if(ps==n || ng==n){
        cout << "1\n" << 1 << " " << n << endl;
        continue;
    }
    if(ps==ng){
        cout << n << endl;
        f(i,0,n){
            cout << i+1 << " " << i+1 << endl;
        }
        continue;
    }
    f(i,0,n-1){
        if(a[i]==a[i+1]){
            i++;
            continue;
        }
        if(a[i]==1 && a[i+1]==-1){
            p++;
            i++;
            continue;
        }
        if(a[i]==-1 && a[i+1]==1){
            p--;
            i++;
            continue;
        }
    }
    if(p==0){
        f(i,0,n-1){
        if(a[i]==a[i+1]){
            cout << i+1 << " " << i+2 << endl;
            i++;
            continue;
        }
        if(a[i]==1 && a[i+1]==-1){
            cout << i+1 << " " << i+2 << endl;
            i++;
            continue;
        }
        if(a[i]==-1 && a[i+1]==1){
            cout << i+1 << " " << i+2 << endl;
            i++;
            continue;
        }
        }
    }
    else{
        cout << -1 << endl;
    }
  }
}