#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int             long long
#define all(a)          a.begin(),a.end()
#define endl            "\n"
#define fill(a,b) memset(a, b, sizeof(a))
#define mii map<int, int> 
#define vi vector<int>

using namespace std;
 
int lcm(int a, int b){
    int g=__gcd(a, b);
    return a/g*b;
}
int power(int a, int b, int p){
    if(a==0)
    return 0;
    int res=1;
    a%=p;
    while(b>0)
    {
        if(b&1)
        res=(1ll*res*a)%p;
        b>>=1;
        a=(1ll*a*a)%p;
    }
    return res;
}

 
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int i,j,x=0,y=0,p,n,q=-1,u=0,v=0,k,c;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    p=b[0];
    q=b[n-1];
    // cout << p << " " << q << endl;
    for(int i=0;i<n;i++){
        if(a[i]==p){
            u=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==q){
            v=i;
        }
    }
    // cout << u << " " << v << endl;
    int ans=0;
    for(i=0;i<n-1;i++){
    ans=max(a[i]-a[i+1],ans);
    }
    if(u==0 || v==n-1){
        cout << max(ans,b[n-1]-b[0]) << endl;
    }
    else{
        cout << max(ans,max(b[n-1]-a[0],a[n-1]-b[0])) << endl;
    }


    }
}