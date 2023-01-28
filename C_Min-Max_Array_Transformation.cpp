#include <bits/stdc++.h>
#define int                 long long
#define f(i, a, b)          for (int i = a; i < b; i++)
#define pb                  push_back
#define all(a)              a.begin(), a.end()
#define arraysort(a)        sort(a, a + n)
#define endl                "\n"
#define inputarray(a, n)    f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)    f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, p, q;
        cin >> n;
        int a[n], b[n], d[n], e[n], x;
        inputarray(a, n);
        inputarray(b, n);
        int i = 0, j = 0, k = 0;
        while (k != n){
            if (a[i] <= b[j]){
                d[k++] = b[j] - a[i];
                i++;
                continue;
            }
            if (a[i] > b[j]){
                j++;
                continue;
            }
        }
        e[n - 1] = b[n - 1] - a[n - 1];
        x = b[n - 1];
        for (i = n-2; i >= 0; i--){
            if (b[i] >= a[i + 1]){
                e[i] = x - a[i];
            }
            else{
                x = b[i];
                e[i] = x - a[i];
            }
        }
        printarray(d, n);
        printarray(e, n);
    }
}