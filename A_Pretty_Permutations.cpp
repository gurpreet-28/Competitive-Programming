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
    int n, p=-1, q=0, r, x, y, ans=0;
    cin >> n;
    int a[n];
    f(i,0,n){
        a[i]=i+1;
    }
    if(n%2==0){
        f(i,0,n-1){
            swap(a[i],a[i+1]);
            i++;
        }
    }
    else{
        a[0]=3;
        a[1]=1;
        a[2]=2;
        f(i,3,n-1){
            swap(a[i],a[i+1]);
            i++;
        }
    }
    printarray(a,n);

  }
}
