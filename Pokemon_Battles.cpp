// #include <bits/stdc++.h>
// #define int             long long
// #define f(i,a,b)        for(int i=a;i<b;i++)
// #define pb              push_back
// #define all(a)          a.begin(),a.end()
// #define arraysort(a)    sort(a,a+n)
// #define endl            "\n"
// #define inputarray(a,n) f(i,0,n){cin >> a[i];}
// #define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
// using namespace std;

// signed main (){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--){
//     int n,p,q=0,r,x=0,y;
//     cin >> n;
//     int a[n],b[n],c[n],d[n];
//     inputarray(a,n);
//     inputarray(b,n);
    
//     f(i,0,n){
//         c[i]=a[i];
//         d[i]=b[i];
//     }
//     arraysort(c);
//     arraysort(d);
//     vector<int>v;
//     f(i,0,n){
//         x=lower_bound(c,c+n,a[i])-c;
//         v.pb(x);
//     }
//     f(i,0,n){
//         x=lower_bound(d,d+n,b[i])-d;
//         v[i]+=x;
//     }
//     int max=n-1;
//     f(i,0,n){
//         if(v[i]>=max){
//             q++;
//         }
//     }
//     // printarray(v,v.size());
//     cout << q << endl;


//   }
// }

#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n,ans=0,m=0;
    cin>>n;
    int ar[n],br[n];
    inputarray(ar,n);
    inputarray(br,n);
    vector< pair <int,int> >v;
    f(i,0,n){
    v.push_back( make_pair(ar[i],br[i]) );
    }
    sort(all(v));
    for(int i=n-1;i>=0;i--)
    {
        if(v[i].second>m)
        ans++;
        m=max(m,v[i].second);
    }
        cout<<ans<<endl;
    }
}