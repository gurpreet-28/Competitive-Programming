#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long int n, i, x, y, s = 0, p = 0, c = 0;
        cin >> n;
        long long int a[n], b[n + 1];
        for (i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        b[0] = 0;
        for (i = 0; i < n; i++){
            s += a[i];
            b[i + 1] = s;
        }
        for (i = n - 1; i >= 0; i--){
            p += a[i];
            c++;
            x = i * a[i - 1];
            y = x - b[i];
            if (y <= p){
                break;
            }
        }
        if (a[0] == a[n - 1]){
            c = 0;
        }
        cout << c << endl;
    }
}
