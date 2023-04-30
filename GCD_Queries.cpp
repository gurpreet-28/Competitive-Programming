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
#define MAXN 1000001
using namespace std;

int spf[MAXN];
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
        int t=spf[x];
        while(spf[x]==t)
            x = x / spf[x];
    }
    return ret;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    sieve();
    while (testcases--){
        int n, m, p=0;
        cin >> n;
        int a[n];
        inputarray(a,n);
        cin >> m;
        int q[m];
        inputarray(q,m);
        map<int,int>map_set;
        
        f(i,0,n){
            map_set[a[i]]++;
        }

        map<int,map<int,int>>mp;

        f(i,0,n){
            vector<int>temp=getFactorization(a[i]);
            for(auto t: temp){
                mp[t][a[i]]++;
            }
        }

        vector<int>ans;
        
        f(i,0,m){
            int z=1;
            
            vector<int>temp = getFactorization(q[i]);
            
            int maxi=1e9;
            for(auto k: temp){
                if(mp[k].size()>0){
                    z=0;
                    maxi=min(mp[k].begin()->first,maxi);
                }
            }
            
            if(z==1){
                maxi=map_set.begin()->first;
            }
            vector<int>t=getFactorization(maxi);
            ans.pb(maxi);
            for(auto ele: t){
                mp[ele][maxi]--;
                if(mp[ele][maxi]==0){
                    mp[ele].erase(maxi);
                }
            }
            map_set[maxi]--;
            if(map_set[maxi]==0){
                map_set.erase(maxi);
            }
        }
        printarray(ans,m);
    }
}