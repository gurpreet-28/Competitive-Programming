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
        cin >> n;
        int a[n];
        inputarray(a,n);
        if(n==1){
            cout << 1 << endl;
            continue;
        }
        p=*max_element(a,a+n);
        int pref[n+1];
        int suff[n+1];
        pref[0]=a[0];
        for(int i=1;i<n;i++){
            pref[i]=max(pref[i-1],a[i]);
        }
        suff[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=max(suff[i+1],a[i]);
        }
        int cnt=0;
        f(i,0,n){
            int ans=0;
            if(i>0)
                ans=max(ans,pref[i-1]);
            ans=min(ans,a[i]);
            if(i<n-1)   
                ans=max(suff[i+1],ans);
            if(ans!=p){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}