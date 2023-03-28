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

int lcm(int a, int b){
    return (a*b)/__gcd(a,b);
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n;
        int a[n],b[n];
        f(i,0,n){
            cin >> a[i] >> b[i];
        }
        int ans=1;
        int g=0;
        int l=1;
        for(int i=0;i<n;i++){
            g=__gcd(g,a[i]*b[i]);
            l=lcm(l,b[i]);
            if (g%l!=0){
                ans++;
                l=b[i];
                g=a[i]*b[i];
            }
        }
        cout << ans << endl;
    }
}