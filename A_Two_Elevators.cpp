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
//     int n, p, a,b,c,q, r, x, y;
//     cin >> a >> b >> c;
//     if(c>b){
//         p=2*(c-b);
//     }
//     else{
//         p=b-c;
//     }
//     p+=min(b,c);
//     if(p>a){
//         cout <<  1 << endl;
//     }
//     else if(p<a){
//         cout << 2 << endl;
//     }
//     else{
//         cout << 3 << endl;
//     }
//   }
// }

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int temp1, temp2;

        temp1 = a - 1;
        if(c > b){
        temp2 = (c - b) + (c - 1);
        }
        else{
        temp2 = b - 1; 
        }
        if (temp1 < temp2)
            cout << "1" << endl;
        else if (temp1 > temp2)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }
}