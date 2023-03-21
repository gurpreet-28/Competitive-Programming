#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
// #define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

bool func(int n, int mid, int pref[]){
    cout << "? " << mid << " ";
    f(i,1,mid+1){
        cout << i << " "; 
    }
    cout << endl;
    int dic;
    cin >> dic;
    return (pref[mid]<dic);
}


signed main (){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, p=0, q;
        cin >> n;
        int a[n+1];
        f(i,1,n+1){
            cin >> a[i];
        }
        int pref[n+1];
        pref[0]=0;
        f(i,1,n+1){
            pref[i]=pref[i-1]+a[i];
        }
        int l=1,r=n;
        int ans=-1;
        while(l<=r){
            int m=(l+r)/2;
            if(func(n,m,pref)){
                ans=m;
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        cout << "! " << ans << endl;
    }
}