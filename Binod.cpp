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
    int n, p=-1, q, r, j, x, y;
    cin >> n >> q;
    int a[n],b[n];
    inputarray(a,n);
    f(i,0,n){
        b[i]=a[i];
    }
    vector<vector<int>>bin(62,vector<int>(n,0));
    f(i,0,62){
        f(j,0,n){
            bin[i][j]=b[j]%2;
            b[j]/=2;
        }
    }
    vector<vector<int>>set(62,vector<int>(n+1,0));

    f(i,0,62){
        f(j,1,n+1){
            set[i][j]=set[i][j-1]+bin[i][j-1];
        }
    }
    int l1,r1,l2,r2,k;
    while(q--){
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int ans=0;
        int s1=0,s2=0,ns1=0,ns2=0;
        s1=set[k][r1]-set[k][l1-1];
        s2=set[k][r2]-set[k][l2-1];
        ns1=r1-l1+1-s1;
        ns2=r2-l2+1-s2;
        ans=(s1*ns2)+(s2*ns1);
        cout << ans << endl;
    }
  }
}