#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

void solve(){
    int n, p=0, q;
    cin >> n;
    vector<vector<int>>v;
    map<int,int>m;
    while(n--){
        int k;
        cin >> k;
        vector<int>temp;
        f(i,0,k){
            cin >> p;
            temp.pb(p);
            m[p]++;
        }
        v.pb(temp);
    }        
    f(i,0,v.size()){
        bool b = true;
        f(j,0,v[i].size()){
            if(m[v[i][j]]==1){
                b = false;
            }
        }
        if(b){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        solve();
    }
}