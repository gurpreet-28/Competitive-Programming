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
//         int n, m, p=0, q,c;
//         cin >> n >> c;
//         int a[n];
//         inputarray(a,n);
//         f(i,0,n){
//             a[i]+=i+1;
//         }
//         arraysort(a);
//         int i=0;
//         for(;i<n;i++){
//             if(c>=a[i]){
//                 c-=a[i];
//                 p++;
//             }
//             else{
//                 break;
//             }
//         }
//         cout << p << endl;
//         // printarray(a,n);
//     }
// }

#include <bits/stdc++.h>
#define int long long
#define f(i, a, b) for (int i = a; i < b; i++)
#define mp make_pair
#define pb push_back
#define all(a) a.begin(), a.end()
#define arraysort(a) sort(a, a + n)
#define endl "\n"
#define inputarray(a, n) \
    f(i, 0, n)           \
    {                    \
        cin >> a[i];     \
    }
#define printarray(a, n)     \
    f(i, 0, n)               \
    {                        \
        cout << a[i] << " "; \
    }                        \
    cout << endl;
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m, p = 0, q, c;
        cin >> n >> c;
        int a[n];
        inputarray(a, n);
        f(i, 0, n)
        {
            a[i] += i + 1;
        }
        arraysort(a);
        int i = 0;
        while (i<n)
        {
            if (a[i] <= c)
            {
                c -= a[i];
                i++;
            }
            else
            {
                break;
            }
        }
        cout << i << endl;
        printarray(a,n);
        cout << c << endl;
    }
}