#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n,q,x;
        cin >> n >> x;
        int a[n];
        double p=0;
        inputarray(a,n);
        arraysort(a);
        int ans=0;
        for(int i=n-1;i>=0;i--){
            p+=(double)a[i];
            if(p/(double)(n-i)>=(double)x){
                ans++;
            }
            else{
                break;
            }
        }
        cout << ans << endl;
    }
}