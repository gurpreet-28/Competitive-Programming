#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sum=0, sum1=0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int x = min(k, n - k);
        for (int i = 0; i < x; i++)
        {
            sum += a[i];
        }
        for (int i = x; i < n; i++){
            sum1 += a[i];
        }
        cout << sum1 - sum << endl;
    }
    return 0;
}