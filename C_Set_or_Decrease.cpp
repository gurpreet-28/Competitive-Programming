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

bool func(int m, int n, int k, int a[], int pref[]){
    for(int i=n-1;i>=1;i--){
        int z=m-n+i;
        if(z<0){
            continue;
        }
        if((pref[i]-pref[1]+(a[0]-z)*(n-i+1))<=k){
            return true;
        }
    }
    return false;
}


signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m, p=0, q, k;
        cin >> n >> k;
        int a[n];
        inputarray(a,n);
        arraysort(a);
        int pref[n+1]={0};
        f(i,1,n+1){
            pref[i]=pref[i-1]+a[i-1];
        }
        int ans=0;
        if(pref[n]<=k){
            cout << 0 << endl;
            continue;
        }
        ans=pref[n]-k;
        int l=0,r=ans;
        while(l<=r){
            int m=l+(r-l)/2;
            if(func(m,n,k,a,pref)){
                ans=m;
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        cout << ans << endl;
    }
}