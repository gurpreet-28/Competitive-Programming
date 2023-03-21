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

int solve(int i, int a[], int n, int sum1, int sum2){
    if(i==n){
        return abs(sum1-sum2);
    }
    return min(solve(i+1,a,n,sum1+a[i],sum2),solve(i+1,a,n,sum1,sum2+a[i]));
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
        int n, m, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        cout << solve(0,a,n,0,0) << endl;
    }
}