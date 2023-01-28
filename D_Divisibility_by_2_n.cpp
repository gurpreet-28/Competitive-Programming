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
    int n, p=0, q=0, r, j, x=0, y;
    cin >> n;
    int a[n],b[n];
    inputarray(a,n);
    f(i,0,n){
        while(a[i]%2==0){
            a[i]/=2;
            p++;
        }
    }
    r=n;
    while(r!=1){
        q++;
        r/=2;
    }
    r=n-p;
    j=(n/2) - q;
    int ans=0;
    if(r<=0){
        cout << 0 << endl;
        continue;
    }
    vector<int>v;
    long temp2=2;
    for(int i=0;i<n;i++){
        long temp=temp2;
        temp2+=2;
        int c=0;
        while(temp%2==0){
            c++;
            temp/=2;
        }
        v.pb(c-1);
    }
    sort(all(v));
    for(int i=v.size()-1;i>=0;i--){
        if(r<=0){
            break;
        }
        r-=v[i];
        ans++;
    }
    if(r<=0){
        cout << ans << endl;
        continue;
    }
    cout << -1 << endl;
    // printarray(v,v.size());
}
}