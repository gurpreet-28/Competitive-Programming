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

bool permu(set<int>s){
    int p=1;
    for(auto i: s){
        if(i!=p){
            return false;
        }
        p++;
    }
    return true;
}

void solve(){
    int n, m, p=0, q;
    cin >> n;
    int a[n];
    inputarray(a,n);
    int i=0,sz=0,j=0;
    map<int,int>mp;
    while(i<n){
        if(mp[a[i]]==2){
            break;
        }
        p=max(p,a[i]);
        if(mp[a[i]]==0){
            sz++;
        }
        if(sz==p){
            break;
        }
        mp[a[i]]++;
        i++;
    }
    set<vector<int>>v;
    set<int>s1,s2;
    if(i<n-2){
        f(k,0,i+1){
            s1.insert(a[k]);
        }
        f(k,i+1,n){
            s2.insert(a[k]);
        }
        if(s1.size()==i+1 and s2.size()==n-i-1  and permu(s1) and permu(s2))
            v.insert({i+1,n-i-1});
    }
    
    s1.clear();
    s2.clear();
    mp.clear();
    i=0,j=0,sz=0;
    reverse(a,a+n);
    while(i<n){
        if(mp[a[i]]==2){
            break;
        }
        p=max(p,a[i]);
        if(mp[a[i]]==0){
            sz++;
        }
        if(sz==p){
            break;
        }
        mp[a[i]]++;
        i++;
    }
    if(i<n-2){
        f(k,0,i+1){
            s1.insert(a[k]);
        }
        f(k,i+1,n){
            s2.insert(a[k]);
        }
        if(s1.size()==i+1 and s2.size()==n-i-1 and permu(s1) and permu(s2))
            v.insert({n-i-1,i+1});
    }
    cout << v.size() << endl;
    for(auto i: v){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
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