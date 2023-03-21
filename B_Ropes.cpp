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

// bool func(double a[],int n,double m,int k){
//     if(m==0){
//         return true;
//     }
//     int p=0;
//     f(i,0,n){
//         p+=(a[i]/m);
//     }
//     if(p>=k){
//         return true;
//     }
//     return false;
// }

// signed main (){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t=1;
//     // cin >> t;
//     while (t--){
//         int n, m, p=0,k, q;
//         cin >> n >> k;
//         double a[n];
//         inputarray(a,n);
//         double r=accumulate(a,a+n,0);
//         double l=0;
//         double ans=0;
//         int it=100;
//         while(it--){
//             double m=l+(r-l)/2.0;
//             if(func(a,n,m,k)){
//                 ans=max(ans,m);
//                 l=m;
//             }
//             else{
//                 r=m;
//             }
//         }
//         cout << fixed << setprecision(6) << ans << endl;
//     }
// }

bool prd(vector<int> &a, int k, double x)
{
    if (x == 0) return true;
    int cnt = 0;
    for (int i = 0; i < a.size(); ++i)
        cnt += a[i] / x;
    return cnt >= k;
}

signed main()
{
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for (auto &i : a) cin >> i;

    double l = 0, r = 1e8, mid;
    int lp = 100;
    while (lp--)
    {
        mid = l + (r - l) / 2;
        if (prd(a, k, mid))
            l = mid;
        else
            r = mid;
    }
    cout << l << '\n';
}