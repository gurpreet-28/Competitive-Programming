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
        map<int,int>mp;
        f(i,0,n){
            mp[a[i]]++;
        }
        int ans=0;        
        for(auto i: mp){
            int temp = i.first;
            f(j,2,(int)sqrt(i.first)+1){
                if(temp%(j*j)==0){
                    ans+=mp[temp]*mp[temp/j]*mp[temp/(j*j)];
                }
            }
            int t=mp[temp];
            ans+=(t*(t-1)*(t-2));
        }
        cout << ans << endl;        
    }
}