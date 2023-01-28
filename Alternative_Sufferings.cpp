// #include <bits/stdc++.h>
// #define int               long long
// #define f(i,a,b)          for(int i = a; i < b; i++)
// #define pb                push_back
// #define all(a)            a.begin(), a.end()
// #define arraysort(a)      sort(a, a + n)
// #define endl              "\n"
// #define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
// #define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
// using namespace std;

// signed main(){
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(NULL);
//   int t;
//   cin >> t;
//   while (t--){
//     int n, p=0, k, m, q, o=0, j, x, y;
//     cin >> n >> k;
//     string s;
//     cin >> s;
//     vector<int>l(n,INT_MAX),r(n,INT_MAX),op(n,0);
//     j=-1;
//     f(i,0,n){
//         if(s[i]=='1'){
//             j=i;
//         }
//         else{
//             if(j!=-1){
//                 l[i]=i-j;
//             }
//         }
//     }
//     j=-1;
//     for(int i=n-1;i>=0;i--){
//         if(s[i]=='1'){
//             j=i;
//         }
//         else{
//             if(j!=-1){
//                 r[i]=j-i;
//             }
//         }
//         if(r[i]==INT_MAX && l[i]==INT_MAX){
//             r[i]=0;
//             continue;
//         }
//         r[i]=min(r[i],l[i]);
//     }
//     // f(i,0,n){
//     //     if(s[i]=='0'){
//     //         j=min(l[i],r[i]);
//     //         if(j<=k){
//     //         op[i]=k-j+1;
//     //             if(op[i]%2==1){
//     //                 s[i]='1';
//     //             }
//     //         }
//     //     }
//     //     else{
//     //         s[i]='0';
//     //         j=min(l[i],r[i]);
//     //         if(j<=k-1){
//     //         op[i]=k-j-1+1;
//     //             if(op[i]%2==1){
//     //                 s[i]='1';
//     //             }
//     //         }
//     //     }
//     // }
//      for(int i=0;i<n;i++){
//         if(k<r[i]){
//             s[i]='0';
//             continue;
//             }
//         int p=(k-r[i])%2;
//         if(p==1){
//             s[i]='0';
//         }
//         else{
//             s[i]='1';
//         }
//     }
//     cout << s << endl;
//     }
// }

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
#define all(a) a.begin(), a.end()
#define endl "\n"
#define fill(a, b) memset(a, b, sizeof(a))
#define mii map<int, int>
#define vi vector<int>
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;

int lcm(int a, int b)
{
    int g = __gcd(a, b);
    return a / g * b;
}
int power(int a, int b, int p)
{
    if (a == 0)
        return 0;
    int res = 1;
    a %= p;
    while (b > 0)
    {
        if (b & 1)
            res = (1ll * res * a) % p;
        b >>= 1;
        a = (1ll * a * a) % p;
    }
    return res;
}
int modInverse(int n, int p)
{
    return power(n, p - 2, p);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int i, j, x = 0, y = 0, p, n, q = -1, u = 0, v = 0, k, c;
        cin >> n >> k;
        string s, temp;
        cin >> s;
        temp = s;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (i > 0)
                {
                    if (s[i - 1] == '0')
                        temp[i - 1] = '1';
                }
                if (i < n - 1)
                {
                    if (s[i + 1] == '0')
                        temp[i + 1] = '1';
                }
                temp[i] = '0';
            }
        }
        s = temp;
        k--;
        p = -1;
        rep(i, 0, n)
        {
            if (s[i] == '1')
            {
                p = i;
                break;
            }
        }
        rep(i, 0, n)
        {
            if (s[i] == '1')
            {
                q = i;
                // break;
            }
        }
        if (p == -1)
        {
            cout << s << endl;
            continue;
        }
        int a[n];
        x = -1;
        rep(i, p, q)
        {
            if (s[i] == '1')
            {
                x = i;
                a[i] = -1;
                continue;
            }
            if (x == -1)
                continue;
            if (s[i] == '0')
            {
                a[i] = i - x;
            }
        }
        x = -1;
        for (i = q; i >= p; i--)
        {
            if (s[i] == '1')
            {
                x = i;
                a[i] = -1;
                continue;
            }
            if (x == -1)
                continue;
            if (s[i] == '0')
            {
                a[i] = min(a[i], x - i);
            }
        }
        rep(i, 0, p)
        {
            a[i] = p - i;
        }
        rep(i, q + 1, n)
        {
            a[i] = i - q;
        }
        rep(i, 0, n)
        {
            if (a[i] == -1)
                a[i] = 0;
            if (a[i] > k)
                s[i] = '0';
            else
            {
                if ((k - a[i]) % 2 == 0)
                    s[i] = '1';
                else
                    s[i] = '0';
            }
            // cout<<a[i]<<" ";
        }
        cout << s << endl;
        // cout<<endl;
    }
}