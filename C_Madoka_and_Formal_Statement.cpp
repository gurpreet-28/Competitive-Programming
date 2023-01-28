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
    int n, p=0, q, r, x, y;
    cin >> n;
    int a[n],b[n];
    inputarray(a,n);
    inputarray(b,n);
    f(i,0,n){
        if(a[i]>b[i]){
            p=1;
            break;
        }
    }
    if(p==1){
        cout << "NO" << endl;
    }
    else{
        a[n-1]+=min(abs(a[n-1]-b[n-1]),abs(a[0]-a[n-1])+1);
        for(int i=n-2;i>=0;i--){
            if(a[i]<=a[i+1])
                a[i]+=min(abs(a[i+1]-a[i])+1,abs(a[i]-b[i]));
        }
        if(a[n-1]!=b[n-1]){
            if(a[n-1]<=a[0]){
                a[n-1]+=min(abs(a[n-1]-b[n-1]),abs(a[0]-a[n-1])+1);
            }
        }
        f(i,0,n){
            if(a[i]!=b[i]){
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
        // printarray(a,n);
    }

    }
}
