#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
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
        int a[n],b[m];
        inputarray(a,n);
        inputarray(b,m);
        sort(b,b+m);
        int pref[m+1];
        int pref1[n+1];
        pref[0]=0;
        pref1[0]=0;
        f(i,1,n+1){
            pref1[i]=pref1[i-1]+a[i-1];
        }
        for(int i=1;i<=m;i++){
            pref[i]=pref[i-1]+b[i-1];
        }
        // printarray(pref1,n+1);
        // printarray(pref,m+1);
        for(int i=1;i<=n;i++){
            int idx=upper_bound(pref,pref+m+1,pref1[i])-pref;
            cout << idx-1 << " ";
        }
        cout << endl;
        
    }
}
