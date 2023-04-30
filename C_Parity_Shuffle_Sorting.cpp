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
        if(is_sorted(a,a+n)){
            cout << 0 << endl;
            continue;
        }
        int ans=1;
        vector<pair<int,int>>v;
        
        if((a[0]+a[n-1])%2==1){
            a[n-1]=a[0];
        }
        else{
            a[0]=a[n-1];
        }
        v.pb({1,n});
        f(i,1,n-1){
            ans++;
            if((a[i]+a[0])%2==0){
                v.pb({i+1,n});
            }
            else{
                v.pb({1,i+1});
            }
        }
        cout << ans << endl;
        f(i,0,ans){
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
}