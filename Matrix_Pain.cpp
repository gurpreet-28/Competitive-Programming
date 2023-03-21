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
    cin>>n>>m>>k;
    int mod=1e9+7;
    // vector<pair<int,int>>vr;
    // vector<pair<int,int>>vc;
    map<int,int>vr,vc;
    int z;
    int sum=0;
    int qwe=1,ewq=1;
    for(i=0;i<k;i++){
        cin>>x>>y>>z;
        if(x==0){
            if(vr[y]==0 and qwe==1){
                vr[y]=z;
                qwe=0;
            }
            else{
                vr[y]*=z;
                vr[y]%=mod;
            }
            sum+=z;
            sum%=mod;
        }
        else{
            if(vc[y]==0 and ewq==1){
                vc[y]=z;
                ewq=0;
            }
            else{
                vc[y]*=z;
                vc[y]%=mod;
            }
            if(c==0){
                c=y;
            }
        }
    }
    
    x=n*m;
    x%=mod;
    int ans=x*(x+1)/2;
    ans%=mod;
    int fin=0,dec=0;
    // for(i=0;i<n1;i++){
    for(auto i: vr){
        x=i.first;
        y=i.second;
        int a=x-1,b=x;
        p=(x-1)*m+1;
        p%=mod;
        p=(p-1)*m;
        p%=mod;
        p=p+m*(m+1)/2;
        p%=mod;
        ans+=p*(y-1);
        ans%=mod;
        int p1=(x-1)*m+c;
        p1%=mod;
        dec+=p1;
        dec%=mod;
        int p2=p1*(y);
        p2%=mod;
        fin+=p2;
        fin%=mod;
    }
    for(auto i: vc){
        x=i.first;
        y=i.second;
        q=n*m-(m-x);
        q%=mod;
        p=n*(x+q)/2;
        p%=mod;
        p=p-(dec+(x-c)*vr.size());
        p%=mod;
        // cout<<p<<endl;
        p=p+fin+(x-c)*sum;
        p%=mod;
        ans+=p*(y-1);
        ans%=mod;
    }
    cout<<(ans+mod)%mod<<endl;
}
}


// #include <bits/stdc++.h>
// #define int               long long
// #define f(i,a,b)          for(int i=a;i<b;i++)
// #define mp                make_pair
// #define pb                push_back
// #define all(a)            a.begin(),a.end()
// #define arraysort(a)      sort(a,a+n)
// #define endl              "\n"    
// #define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
// #define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
// using namespace std;

// signed main (){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t=1;
//     cin >> t;
//     while (t--){
//         int n, m, p=0, q;
//         cin >> n >> m >> q;
//         int a[n][m];
//         f(i,0,n){
//             f(j,0,m){
//                 a[i][j]=(i)*m+(j+1);
//             }
//         }
//         int row[n],col[m];
        
//         f(i,0,n){ row[i] = 1;}
//         f(i,0,m){ col[i] = 1;}

//         while(q--){
//             int ty,idx,v;
//             cin >> ty >> idx >> v;
//             if(ty==0){
//                 row[idx-1]*=v;
//             }
//             else{
//                 col[idx-1]*=v;
//             }
//         }
//         int ans = 0, mod = 1e9+7;

//         f(i,0,n){
//             f(j,0,m){
//                 int temp;
//                 temp=row[i]*col[j];
//                 temp%=mod;
//                 ans+=a[i][j]*temp;
//                 ans%=mod;
//             }
//         }
//         cout << ans << endl;
//     }
// }