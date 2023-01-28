#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, m, p = 0;
        cin >> n >> m;
        int a[n][m];
        f(i,0,n){
            f(j,0,m){
                cin >> a[i][j];
            }
        }
        int top=0,right=m-1,bottom=n-1,left=0;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                cout << a[top][i] << " ";
            }
            top++;
            for(int i=top;i<=bottom;i++){
                cout << a[i][right] << " ";
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    cout << a[bottom][i] << " ";
                }
            }
            bottom--;
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    cout << a[i][left] << " ";
                }
            left++;
            }
        }
    }
}
