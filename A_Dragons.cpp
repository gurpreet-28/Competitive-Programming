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
        int n,s,p=0,q;
        cin >> s >> n;
        vector<pair<int,int>>v;
        f(i,0,n){
            int x,y;
            cin >> x >> y;
            v.pb(make_pair(x,y));
        }
        sort(all(v));
        f(i,0,n){
            if(s<=v[i].first){
                p=1;
                break;
            }
            s+=v[i].second;
        }
        if(p==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }


    }
}