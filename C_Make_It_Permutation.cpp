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

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q, r,t;
        cin >> n >> r >> m;
        int a[n];
        inputarray(a,n);
        t=n;
        set<int>s;
        f(i,0,n){
            s.insert(a[i]);
        }
        vector<int>v;
        for(auto i: s){
            v.pb(i);
        }
        int ans=0,ans1;
        ans=n-v.size();
        ans*=r;
        ans1=ans;
        ans=0;
        v.insert(v.begin(),0);
        n=v.size();
        p=1;
        // cout << ans1 << endl;

        int ans2=1e18;
        // printarray(v,n);
        ans=0;
        if(n-1==v[n-1]){
            cout << ans1 << endl;
            continue;
        }
        for(int i=1;i<n;i++){
            if(v[i]==p){           
                p++;
            }
            else{
                ans+=(v[i]-p)*m;
                p=v[i]+1;
            }
            // cout << p << " -- "  << v[i] << endl;
            ans2=min(ans2,ans+(n-i-1)*r);
        }
        if(v[1]!=1){
            ans2=min(ans2,m+(n-1)*r);
        }
        cout << ans1+ans2 << endl;
    }
}