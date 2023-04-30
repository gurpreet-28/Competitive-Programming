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
    // cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n;
        vector<pair<int,int>>a(n);
        f(i,0,n){
            cin >> a[i].first >> a[i].second;
        }        
        sort(all(a));
        int b1[n],b2[n];
        f(i,0,n){
            b1[i]=a[i].first;
            b2[i]=a[i].second;
        }
        vector<int>arr(n+1);
        arr[0]=0;
        f(i,1,n+1){
            int x=lower_bound(b1,b1+n,b1[i-1]-b2[i-1])-b1;
            arr[i]=arr[x]+1;
        }
        int ans=0;
        f(i,1,n+1){
            ans=max(ans,arr[i]+1);
        }
        cout << n-ans+1 << endl;
    }
}