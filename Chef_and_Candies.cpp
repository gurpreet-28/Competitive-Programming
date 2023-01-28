#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        if (n <= x){
            cout << 0 << endl;
        }
        else{
            int a = n - x;
            if (a % 4 == 0)
                cout << a / 4 << endl;
            else
                cout << a / 4 + 1 << endl;
        }
    }
}