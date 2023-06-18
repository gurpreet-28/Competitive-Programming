// #include <bits/stdc++.h>
// #define int               long long
// #define f(i,a,b)          for(int i=a;i<b;i++)
// #define mp                make_pair
// #define pb                push_back
// #define rall(a)           a.rbegin(),a.rend()
// #define all(a)            a.begin(),a.end()
// #define arraysort(a)      sort(a,a+n)
// #define endl              "\n"    
// #define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
// #define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
// using namespace std;


// int lcm(int a, int b){
//     if(a==0 || b==0)
//         return 0;
//     return (a*b)/__gcd(a,b);
// }

// int power(int a, int b, int p){
//     if(a==0)
//     return 0;
//     int res=1;
//     a%=p;
//     while(b>0)
//     {
//         if(b&1)
//         res=(1ll*res*a)%p;
//         b>>=1;
//         a=(1ll*a*a)%p;
//     }
//     return res;
// }
// int modInverse(int n,int p)
// {
// 	return power(n,p-2,p);
// }

// void solve(){
//     int n, mod=1000000007, p=0, q;
//     cin >> n;
//     map<int,int>mp;
//     f(i,0,n){
//         cin >> p >> q;
//         mp[p]++;
//     }    
//     int ans=1;
//     for(auto i: mp){
//         ans=(ans*n)%mod;
//         ans=(ans*modInverse(ans,mod))%mod;
//         n-=i.second;
//     }
//     cout << ans << endl;



// }

// signed main (){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int testcases=1;
//     // cin >> testcases;
//     while (testcases--){
//         solve();
//     }
// }


#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int             long long
#define all(a)          a.begin(),a.end()
#define endl            "\n"
#define fill(a,b) memset(a, b, sizeof(a))
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;
               
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
while(t--){
    int i,j,x=0,y=0,p=0,n,q=-1,u=0,v=0,k,c=0,m;
    cin>>n;
    int a[n];
    map<int,int>m1;
    set<int>s1;
    rep(i,0,n) {
        cin>>a[i];
        m1[a[i]]++;
        s1.insert(a[i]);
    }
    i=0;
    sort(a,a+n);
    int ans=-1;
    for(auto v:s1){
        i+=m1[v];
        j=n-(i);
        if(v<=j){
            ans=n-i;
            break;
        }
    }
    // for(i=0;i<n;i++){
    //     if(a[i]==n) c++;
    // }
    
    // for(i=0;i<n;i++){
    //     j=(n-a[i]);
    //     if(j<=i) break;
    //     // if(n-a[i]==n-i-1) {
    //         ans=n-(i+1);
    //         break;
    //     // }
    // }
    cout<<ans<<endl;
    // if(c==n){
    //     cout<<-1<<endl;
    //     continue;
    // }



    }
}