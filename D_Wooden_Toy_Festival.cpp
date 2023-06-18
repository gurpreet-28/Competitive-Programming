#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a,n)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

bool check(int mid, int a[], int n){
    int sa=0;
    int i=0,j=0;
    int p=mid;
    while(j<n and p<=mid){
        int m;
        m=(a[i]+a[j])/2;
        p=max(abs(a[i]-m),abs(a[j]-m));
        if(p>mid) break;
        j++;
    }
    i=j;
    p=mid;

    while(j<n and p<=mid){
        int m;
        m=(a[i]+a[j])/2;
        p=max(abs(a[i]-m),abs(a[j]-m));
        if(p>mid) break;
        j++;
    }

    i=j;
    p=mid;

    while(j<n and p<=mid){
        int m;
        m=(a[i]+a[j])/2;
        p=max(abs(a[i]-m),abs(a[j]-m));
        if(p>mid) break;
        j++;
    }
    return (j==n);
}

void solve(){
    int n, m, p=0, q=0;
    cin >> n;
    int a[n];
    inputarray(a,n);
    sort(a,a+n);
    int ans=0;
    // printarray(a,n);
    int l=0,r=1e18;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(check(mid,a,n)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout << ans << endl;

}
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        solve();
    }
}