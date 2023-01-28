#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum=0,n;
        cin >> n;
        int a[n],b[n],c[n],d[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            c[n]=a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
            d[n]=b[i];
        }
        sort(c,c+n);
        sort(d,d+n);
        for(int i=0;i<n;i++){
            sum+=max(abs(a[i]-c[0]),abs(b[i]-d[0]));
        }
        cout << sum << endl;
    }
}