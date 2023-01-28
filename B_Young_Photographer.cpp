#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
        int n,m,mini=INT_MAX;
        cin >> n >> m;
        vector<pair<int,int>>v;
        f(i,0,n){
            int x,y;
            cin >> x >> y;
            v.pb(make_pair(min(x,y),max(x,y)));
            mini=min(mini,max(x,y));
        }
        sort(all(v));
        if(v[n-1].first>mini){
            cout << -1 << endl;
        }
        else{
            if(m>=v[n-1].first && m<=mini){
                cout << 0 << endl;
            }
            else if(m>mini){
                cout << abs(mini-m) << endl;
            }
            else{
                cout << abs(v[n-1].first-m) << endl;
            }
        }
    }
}