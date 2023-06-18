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

int lcm(int a, int b){
    if(a==0 || b==0)
        return 0;
    return (a*b)/__gcd(a,b);
}

void solve(){
    int n, m, p=0, q;
    cin >> n;
    map<string,int>mp;
    f(i,0,n){
        string s;
        cin >> p >> s;
        if(mp.find(s)==mp.end()){
            mp[s]=p;
        }
        else{
            mp[s]=min(p,mp[s]);
        }
    }    
    if(mp.find("10")!=mp.end() and mp.find("01")!=mp.end()){
        p=mp["10"]+mp["01"];
        q=mp["11"];
        if(q==0 || p==0){
            cout << max(p,q) << endl;
        }
        else if(p==0 and q==0){
            cout << -1 << endl;
        }
        else{
            cout << min(p,q) << endl;
        }
    }
    else{
        if(mp["11"]==0){
            cout << -1 << endl;
        }
        else{
            cout << mp["11"] << endl;
        }
    }



}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        solve();
    }
}