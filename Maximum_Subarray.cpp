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
    int n, p=0, q, r, x, y, m;
    cin >> n;
    int a[n];
    inputarray(a,n);
    cin >> m;
    int b[m];
    inputarray(b,m);
    vector<int>v1;
    vector<int>v2;
    f(i,0,m){
        if(b[i]>0){
            v1.pb(b[i]);
        }
    }
    f(i,0,n){
        v1.pb(a[i]);
    }
    f(i,0,m){
        if(b[i]<=0){
            v1.pb(b[i]);
        }
    }
    f(i,0,m){
        if(b[i]<0){
            v2.pb(b[i]);
        }
    }
    f(i,0,n){
        v2.pb(a[i]);
    }
    f(i,0,m){
        if(b[i]>=0){
            v2.pb(b[i]);
        }
    }
    int sum=0,s=0;
    f(i,0,v1.size()){
        sum+=v1[i];
        s=max(sum,s);
        if(sum<0){
            sum=0;
        }
    }
    int sum1=0,s1=0;
    f(i,0,v2.size()){
        sum1+=v2[i];
        s1=max(sum1,s1);
        if(sum1<0){
            sum1=0;
        }
    }
    cout << max(s1,s) << endl;
    }
}