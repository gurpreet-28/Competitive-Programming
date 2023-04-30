#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

#define MAXN   10000001
vector<int>spf(MAXN,0);
void sieve(){
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
        spf[i] = i;
 
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++){
        if (spf[i] == i){
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

vector<int> getFactorization(int x){
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

void solve(){
    int n, m, p=0, q;
    cin >> n;
    int a[n];
    inputarray(a,n);
    map<int,int>mp;
    f(i,0,n){
        vector<int>v=getFactorization(a[i]);
        for(auto j: v){
            mp[j]++;
        }
    }
    p=0;
    if(mp.size()==2){
        for(auto i: mp){
            p+=i.second;
        }    
        if(p==2){
            cout << 0 << endl;
            return;
        }
    }
    int ans=0;
    p=0;
    for(auto i: mp){
        ans+=(i.second/2);
        mp[i.first]%=2;
        p+=mp[i.first];
    }
    cout << ans+(p/3) << endl;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    sieve();
    while (testcases--){
        solve();
    }
}