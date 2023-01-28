// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while (t--){
//         int n, count = 0, greater = 0, smaller = 0;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++){
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++){
//             smaller = 0;
//             greater = 0;
//             for (int j = 0; j < n; j++){
//                 // if (i == j){
//                 //     continue;
//                 // }
//                 if (a[i] <= a[j]){
//                     smaller++;
//                 }
//                 else{
//                     greater++;
//                 }
//             }
//             if (smaller > greater){
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }
// }






#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, less = 0, more = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            less = 0, more = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j] <= a[i])
                    less++;
                else
                    more++;
            }
            if (less > more)
                count++;
        }
        cout << count << "\n";
    }
}