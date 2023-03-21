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

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, p=0;
        cin >> n;
        int a[n];
        inputarray(a,n-1);
        a[n-1]=0;
        map<int,int>m;
        for (int i=0; i<n;i++){
            m[a[i]]++;
        }
        int ans=0;
        vector<int>v;
        for(auto i: m){
            v.pb(i.second);
        }
        sort(v.rbegin(), v.rend());
        p=0;
        ans+=v.size();
        p=ans;
        f(i,0,v.size()){
            v[i]=max(v[i]-p,0ll);
            p--;
        }
        sort(v.rbegin(), v.rend());
        // printarray(v,v.size());
        while(v[0]>0){
            v[0]-=1;
            f(i,1,v.size()){
                if(v[i]==0){
                    break;
                }
                v[i]--;
            }
            sort(all(v));
            reverse(all(v));
            ans++;
            if(v[0]==0){
                break;
            }
        }
        // printarray(v,v.size());
        cout << ans << endl;
    }
}