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
    int n, m, p=0,k, q;
    cin >> n >> k;
    int a[n];
    inputarray(a,n);
    vector<vector<int>>v;
    int b[k];
    for(int i=0;i<k;i++){
        vector<int>temp;
        for(int j=i;j<n;j+=k){
            temp.pb(a[j]);
        }
        sort(all(temp));
        b[i]=temp.size();
        v.pb(temp);
    }
    int ans[n];
    for(int i=0;i<k;i++){
        int t=i;
        for(auto j: v[i]){
            ans[t]=j;
            t+=k;
        }
    }
    if(is_sorted(ans,ans+n)){
        cout << "0" << endl;
    }
    else{
        int p=0;
        f(i,0,k){
            for(auto j: v[i]){
                if((j-i-1)%k!=0){
                    p++;
                }
            }
        }
        if(p==2){
            cout << "1" << endl;
        }
        else{
            cout << "-1" << endl;
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