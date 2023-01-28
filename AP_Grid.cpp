#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int a[n][m];
        if (n > m){
            for (int i = 0; i < n; i++){
                a[i][0] = i + 1;
            }
            for (int i = 0; i < n; i++){
                for (int j = 1; j < m; j++)
                {
                    a[i][j] = a[i][j - 1] + (m + 1 + i);
                }
            }
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 0; i < m; i++){
                a[0][i] = i + 1;
            }
            for (int i = 1; i < n; i++){
                for (int j = 0; j < m; j++){
                    a[i][j] = a[i - 1][j] + (n + 1 + j);
                }
            }
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
}