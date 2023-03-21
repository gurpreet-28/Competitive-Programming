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

bool func(int w,int h,int n,int mid){
    string s1=to_string(mid/w);
    string s2=to_string(mid/h);
    if(s1.length()+s2.length()>19){
        return true;
    }
    if((mid/w)*(mid/h)>=n){
        return true;
    }
    return false;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
        int n, m, p=0, q, w, h;
        cin >> w >> h >> n;
        int l=0,r=INT64_MAX;
        int ans=INT64_MAX;
        // cout << ans << endl;
        while(l<=r){
            int m=l+(r-l)/2;
            if(func(w,h,n,m)){
                ans=min(ans,m);
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        cout << ans << endl;  
    }
}