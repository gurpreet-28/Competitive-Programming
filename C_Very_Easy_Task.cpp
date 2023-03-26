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

bool func(int t, int x ,int y, int n){
    if(t<0){
        return false;
    }
    if(1+(t/x)+(t/y)>=n){
        return true;
    }
    return false;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        int n,x,y;
        cin >> n >> x >> y;
        int ans=0;
        int l=0,r=1e18;
        while (l<=r){
            int t=l+(r-l)/2;
            if(func(t-min(x,y),x,y,n)){
                ans=t;
                r=t-1;
            }
            else{
                l=t+1;
            }
        }
        cout << ans << endl;
    }
}
