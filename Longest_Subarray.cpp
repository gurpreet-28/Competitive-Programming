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
    cin >> t;
    while (t--)
    {
        int n, p = 0,k, ans = 0, i = 0,  m = 1e9 + 7, q=0, r=1, po=1;
        cin >> n;
        int a[n];
        inputarray(a,n);      
        int pre[n],suf[n];
        suf[n-1]=a[n-1];
        pre[0]=a[0];
        f(i,1,n){
            pre[i]=a[i]|pre[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]|a[i];
        }
        printarray(suf,n);
        printarray(pre,n);
        if(pre[n-1]!=pre[n-2]){
            cout << -1 << endl;
            continue;
        }

        f(i,0,n){
            if(pre[i]==pre[n-1]){
                p=i;
                break;
            }
        }
        // printarray(pre,n);
        // cout << p << endl; 
        q=0;
        f(i,p+1,n){
            q|=a[i];
            ans++;
        }

        if(q==pre[n-1]){
            cout << max(n-ans,ans) << endl;
            continue;
        }
        f(i,0,n){
            q|=a[i];
            ans++;
            if(q==pre[n-1]){
                break;
            }
        }
        if(n==ans){
            cout << -1 << endl;
            continue;
        }
        cout << n-ans << endl;
        
    }
}