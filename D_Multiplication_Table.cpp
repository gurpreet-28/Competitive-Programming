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

int less1(int n,int m,int key){
    int ans=0;
    f(i,0,n){
        ans+=min(m,(key)/(i+1));
    }
    return ans;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
        int n, m, p=0, q, k;
        cin >> n >> m >> k;
        if(k==1){
            cout << 1 << endl;
            continue;
        }
        int l=1,r=n*m;
        int ans=0;
        while(l<=r){
            int mid = l+(r-l)/2;
            p = less1(n,m,mid);
            if(p<k){
                ans=mid+1;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout << ans << endl;
    }
}