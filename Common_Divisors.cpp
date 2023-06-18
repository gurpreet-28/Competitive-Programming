#include <bits/stdc++.h>
#define f(i,a,b)          for(int i=a;i<b;i++)
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

vector<int>v[1000001];
int mp[1000001];

void solve(){
    int n, m, p=0, q;
    cin >> n;
    int a[n];
    inputarray(a,n);
    f(i,0,n){
        for(auto c: v[a[i]]){
            mp[c]++;
        }
    }
    p=1;
    for(int i=1;i<=1e6;i++){
        if(mp[i]>1){
            p=i;
        }
    }
    cout << p << endl;
}
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    int n1=1e6;
    f(i,2,n1+1){
        for (int j = i; j <= n1; j+=i){
            v[j].push_back(i);
        }
    }
    while (testcases--){
        solve();
    }
}