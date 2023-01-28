#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define printarray(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}printf("\n");
using namespace std;

signed main (){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
  int t;
  cin >> t;
  while (t--){
  int n,k,p,q;
  cin >> n >> k;
  p = (k-1)/(n-1);
  cout << k + p << endl;
  }
}