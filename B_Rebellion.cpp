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

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){     
    int n, p=0, q=0, d, r, x=0, y=0;
    cin >> n;
    int a[n];
    inputarray(a,n);
    int i=0,j=n-1;
    while(i<j){
        if(a[i]==1 && a[j]==0){
            i++;
            j--;
            p++;
            continue;
        }
        if(a[i]==0){
            i++;
            continue;
        }
        if(a[j]==1){
            j--;
            continue;
        }
    }
    cout << p << endl;
    }
}
