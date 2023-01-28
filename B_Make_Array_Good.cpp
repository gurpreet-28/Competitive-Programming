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
    cin >> t;
    while (t--){
        int n,p=0,q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        vector<pair<int,int>>v;
        vector<pair<int,int>>ans;
        f(i,0,n){
            v.pb(mp(a[i],i));
        }
        sort(all(v));
        p=v[0].first;
        f(i,1,n){
            q=v[i].first%p;
            if(q!=0)
                q=p-q;
            while(1){
                if(q<=v[i].first){
                    ans.pb(mp(v[i].second+1,q));
                    break;
                }
                ans.pb(mp(v[i].second+1,v[i].first));
                q-=v[i].first;
            }
            p=ans[i-1].second+a[ans[i-1].first-1];
        }
        sort(all(ans));
        cout << ans.size() << endl;
        f(i,0,ans.size()){
            cout << ans[i].first << " " << ans[i].second << endl;
        }

    }
}