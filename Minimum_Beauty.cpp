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
        int n, m, p = 0, q;
        cin >> n;
        int a[n];
        inputarray(a, n);
        int ans = INT_MAX;
        arraysort(a);
        int result = INT_MAX;
        for (int i = 1; i < n - 1; i++)
        {
            int median = a[i];
            int l = 0;
            int r = n - 1;
            int minDiff = INT_MAX;
            while (l < r and l < i and r > i)
            {
                int sum = (a[l] + a[i] + a[r]);
                int dif = abs(sum - 3 * median);
                minDiff = min(dif, minDiff);
                if (minDiff == 0)
                    break;
                if (sum > 3 * median)
                    r--;
                else
                    l++;
            }
            result = min(result, minDiff);
        }
        cout << result << endl;
    }
}