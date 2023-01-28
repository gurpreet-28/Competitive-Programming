#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n,p=0,q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        int num[1001];
        f(i,0,1001){
            num[i]=-1;
        }
        f(i,0,n){
            p=__gcd(a[i],p);
            num[a[i]]=i+1;
        }
        int ans=-1;
        for(int i=1000;i>=1;i--){
           for(int j=i;j>=1;j--){
                if(num[i]!=-1 && num[j]!=-1){
                    if(__gcd(i,j)==1){
                        ans=max(ans,num[i]+num[j]);
                    }
                }
            }
        }
        cout << ans << endl;
    }
}