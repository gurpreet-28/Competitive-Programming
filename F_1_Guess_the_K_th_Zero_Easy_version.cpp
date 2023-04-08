#include <bits/stdc++.h>
// #define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

int dp[200001];

bool check(int mid,int k){
    cout << "? " << 1 << " " << mid << endl;
    int x;
    cin >> x;
    dp[mid]=x;
    if(mid-x>=k){
        return true;
    }
    return false;
}

signed main (){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    f(i,0,200001){
        dp[i]=-1;
    }
    int testcases=1,n;
    cin >> n >> testcases;
    while (testcases--){
        int k;
        cin >> k;
        int l,r;
        l=1,r=n;
        int ans=n;
        set<int>s;
        while(l<=r){
            int mid = (l+r)/2;
            if(dp[mid]!=-1){
                if(mid-dp[mid]>=k){
                    ans=mid;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(check(mid,k)){
                    ans=mid;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
        }
        cout << "! " << ans << endl;

        for(int i = ans;i<n;i++){
            if(dp[i]!=-1){
                dp[i]++;
            }
        }
    }
}
