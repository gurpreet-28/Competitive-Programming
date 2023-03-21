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
        int n, m, p, q;
        cin >> n;
        int a[n];
        p=-1;
        inputarray(a,n);
        for(int i=n-1;i>=0;i--){
            if(a[i]==2){
                p=i;
                break;
            }
        }
        q=0;
        // cout << p << endl;
        if(p==-1){
            cout << n << endl;
            continue;
        }
        f(i,0,p){
            if(a[i]==1){
                q++;
            }
        }
        int r=q%4;
        q/=4;
        int ans=0;
        for(int i=n-1;i>p;i--){
            if(a[i]==1){
                ans++;
            }
        }
        ans+=(q*3);
        if(r>2){
            ans+=2;
        }
        else if(r==1){
            ans++;
        }
        cout << ans << endl;
    }
}