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


void solve(){
    int n, m, p=0, q;
    cin >> n;
    int a[n],b[n];
    inputarray(a,n);
    inputarray(b,n);
    map<int,int>mp1,mp2;
    int mx=0;
    p=a[0];
    q=1;
    f(i,1,n){
        if(a[i]==p){
            q++;
        }
        else{
            mp1[p]=max(mp1[p],q);
            q=1;
            p=a[i];
        }
    }
    mp1[p]=max(mp1[p],q);



    p=b[0];
    q=1;
    f(i,1,n){
        if(b[i]==p){
            q++;
        }
        else{
            mp2[p]=max(mp2[p],q);
            q=1;
            p=b[i];
        }
    }
    mp2[p]=max(mp2[p],q);
    int ans=0;
    for(auto i: mp1){
        ans=max(i.second+mp2[i.first],ans);
    }
    
    for(auto i: mp2){
        ans=max(i.second+mp1[i.first],ans);
    }

    cout << ans << endl;
    



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