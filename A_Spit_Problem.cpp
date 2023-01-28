#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
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
        int n,p=0,q;
        cin >> n;
        vector<pair<int,int>>v;
        f(i,0,n){
            int x,y;
            cin >> x >> y;
            v.pb(make_pair(x,y));
        }        
        f(i,0,n){
            int x=v[i].first+v[i].second;
            f(j,i+1,n){
                if(x==v[j].first && v[i].first==v[j].first+v[j].second){
                    p=1;
                    break;
                }
            }
            if(p==1){
                break;
            }
        }
        if(p==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}