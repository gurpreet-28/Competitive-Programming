#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define newline         cout<<endl
#define printarray(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}printf("\n");
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
    int p,s;
    cin >> p >> s;
    int a[2*p][s];
    f(i,0,2*p){
        f(j,0,s){
            cin >> a[i][j];
        }
    }
    vector<int>v;
    vector< pair <int,int>> vp;
    int sum=0;
    for(int i=0;i<2*p;i++){
        sum=0;
        for(int j=0;j<s;j++){
            sum+=(a[i][j]*a[i+1][j]);
        }
        v.pb(sum);
        i++;
    }
    // f(i,0,v.size()){
    //     cout << v[i] << " ";
    // }cout << endl;
    for (int i=0; i<v.size(); i++){
        vp.pb(make_pair(v[i],i+1));
    }
    sort(vp.begin(), vp.end() ,greater<>());
    for (int i=0; i<p; i++){
        cout << vp[i].second << endl;
    }
  }
}