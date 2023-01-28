#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;
#define MAX 1000000000

// set<int> primeFactors(int n)
// {
//     set<int>v;
//     while (n % 2 == 0)
//     {
//         v.insert(2);
//         n = n/2;
//     }
 
//     for (int i = 3; i <= sqrt(n); i = i + 2)
//     {
//         // While i divides n, print i and divide n
//         while (n % i == 0)
//         {
//             v.insert(i);
//             n = n/i;
//         }
//     }
 
//     if (n > 2)
//         v.insert(n);
//     return v;
// }

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){     
    int n, p=0, q=0, r, j, x=0, y=0;
    cin >> n;
    cout << ceil(sqrt(n)) << endl;
    }
}
