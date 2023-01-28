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

// int lcm(int a, int b){
//     return a*(b/__gcd(a,b));
// }

// signed main(){
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(NULL);
//   int t;
//   cin >> t;
//   while (t--){
//     int n, p, k, m=0, q, x, y;
//     cin >> n;
//     int a[n];
//     inputarray(a,n);
//     int b[n+1];
//     f(i,1,n){
//         b[i]=lcm(a[i],a[i-1]);
//     }
//     b[0]=a[0];
//     b[n]=a[n-1];
//     f(i,0,n){
//         if(__gcd(b[i],b[i+1])!=a[i]){
//             m=1;
//             break;
//         }
//     }
//     // printarray(b,n+1);
//     if(m==1){
//         cout << "NO" << endl;
//     }
//     else{
//         cout << "YES" << endl;
//     }
//     }
// }

