#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a,n)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

int power(int a, int b, int p){
    if(a==0)
        return 0;
    int res=1;
    a%=p;
    while(b>0){
        if(b&1)
        res=(1ll*res*a)%p;
        b>>=1;
        a=(1ll*a*a)%p;
    }
    return res;
}

bool myComp(pair<int,int>&a, pair<int,int>&b){
    if(a.first+b.first>=a.second+b.second){
        return true;
    }
    return false;
}

void solve(){
    int n, m, p=0, q;
    cin >> n;
    int a[n],b[n];
    inputarray(a,n);
    inputarray(b,n);
    vector<pair<int,int>>v;
    f(i,0,n){
        v.pb({a[i]-b[i],b[i]-a[i]});
    }    
    sort(all(v));
    int ans=0;
    vector<int>vp;
    
    // f(i,0,n){
    //     cout << v[i].first << " ";
    // }cout << endl;


    
    // f(i,0,n){
    //     cout << v[i].second << " ";
    // }cout << endl;

    for(int i=n-1;i>=0;i--){
        int l=0;
        int r=-1;
        if(!vp.empty()){
            r+=vp.size();
        }
        int idx=-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(vp[mid]<v[i].first){
                idx=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        ans+=(idx+1);
        vp.pb(v[i].second);
    }
    cout << ans << endl;

}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        solve();
    }
}