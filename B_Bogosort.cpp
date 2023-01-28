// #include <bits/stdc++.h>
// #define int               long long
// #define f(i,a,b)          for(int i=a;i<b;i++)
// #define mp                make_pair
// #define pb                push_back
// #define all(a)            a.begin(),a.end()
// #define arraysort(a)      sort(a,a+n)
// #define endl              "\n"    
// #define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
// #define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
// using namespace std;

// signed main (){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t=1;
//     cin >> t;
//     while (t--){
//         int n,p=0,q;
//         cin >> n;
//         int a[n];
//         inputarray(a,n);
//         arraysort(a);
//         reverse(a,a+n);
//         printarray(a,n);
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
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

void Print_Vector(vector<int> Vec)
{
    for (int i = 0; i < Vec.size(); i++) {
        cout << Vec[i] << " ";
    }
    cout << endl;
    return;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n,p=0,q;
        cin >> n;
        set<vector<int>>s;
        vector<int> data_1{ 10, 20, 30, 40 };
        vector<int> data_2{ 5, 10, 15 };
        vector<int> data_3{ 1, 3, 5, 7, 9, 11, 13 };
        vector<int> data_4{ 5, 10, 15 };
        vector<int> data_5{ 10, 20, 30, 40 };
    
        // Inserting vectors into set
        s.insert(data_1);
        s.insert(data_2);
        s.insert(data_3);
        s.insert(data_4);
        s.insert(data_5);

        for (auto it = s.begin();it != s.end();it++) {
            Print_Vector(*it);
        }
    }
}