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
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n >> m;
        int a[n][m];
        f(i,0,n){
            f(j,0,m){
                cin >> a[i][j];
            }
        }
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        int ans=0;
        f(j,0,m){
            int arr[n];
            f(i,0,n){
                arr[i]=a[i][j];
            }
            arraysort(arr);
            reverse(arr,arr+n);
            f(i,0,n){
                ans+=(arr[i]*(n-i-1) - arr[i]*i);
            }
        }
        cout << ans << endl;

    }
}