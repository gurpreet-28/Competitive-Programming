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
//     // cin >> t;
//     while (t--){
//         int n, p=0, q=2;
//         cin >> n;
//         vector<int>a(n);
//         inputarray(a,n);
//         vector<int>v;
//         p=a[0];
//         v.pb(p);
//         vector<int>temp;
//         for(int i=1;i<n;i++){
//             if(a[i]>p){
//                 v.pb(a[i]);
//                 p=a[i];
//             }
//             else
//                 temp.pb(i);
//         }
//         // printarray(temp,temp.size());
//         vector<vector<int>>ans(v.size());
//         for(int i=0;i<v.size();i++){
//             ans[i].pb(v[i]);
//         }
//         for(int i=0;i<temp.size();i++){
//             int l=0,r=v.size()-1;
//             int res=0;
//             while(l<=r){
//                 int m=l+(r-l)/2;
//                 if(v[m]<a[temp[i]]){
//                     res=max(res,m);
//                     l=m+1;
//                 }
//                 else{
//                     r=m-1;
//                 }
//             }
//             ans[res].pb(a[temp[i]]);
//         }
        
//         f(i,0,ans.size()){
//             f(j,0,ans[i].size()){
//                 cout << ans[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// }


#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

int n;
int a[200010], to[200010], st[200010], top;
int vis[200010];
int lst[200010], temp = 0;
vector<int>ans[200010];

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
        int n, m, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        f(i,0,n){
            int l=0,r=temp+1;
            int now=0;
            while(l<=r){
                int m=(l+r)>>1;
                if(lst[m]<a[i]){
                    now=m;
                    r=m-1;
                }
                else{
                    l=m+1;
                }
            }
            if(now>temp){
                temp++;
            }
            ans[now].pb(a[i]);
            lst[now]=a[i];
        }
        for(int i=0;i<=temp;i++){
            for(auto ele: ans[i]){
                cout << ele << " ";
            }
            cout << endl;
        }
    }
}