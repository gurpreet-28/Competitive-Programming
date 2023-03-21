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
//         int n, m=0, p=0, q , x;
//         cin >> n >> x >> p;
//         q=n-x;
//         q%=n;
//         int ans=0;
//         int addi = 0;
//         int r=1;        
//         for (r = 1; r <= 10*n; r++){
//             addi = (r*(r+1))/2;
//             if(addi%n==q){
//                 m=1;
//                 break;
//             }
//         }        
//         if(m==1 && r<=p){
//             cout << "Yes" << endl;
//         }
//         else{
//             cout << "No" << endl;
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

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int prev = 1;
        cout << "*" << endl;
        n--;
        for (int i = 1 ; i <= n; i++){
            for ( int j = 1; j <= prev + i ; j++){
                cout << "*";
            }
            prev = prev + i;
            cout << endl;
        }
    }
}

