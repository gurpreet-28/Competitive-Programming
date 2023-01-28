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
        int n,p=0,q,m;
        cin >> n >> m;
        int a[n];
        inputarray(a,n);
        vector<pair<int,int>>v;
        int k=0;
        f(i,0,n){
            v.pb(mp(a[i],i));
        }
        sort(all(v));
        // f(i,0,n){
        //     cout << v[i].first << " ";
        // }
        // cout << endl;

        // f(i,0,n){
        //     cout << v[i].second << " ";
        // }
        // cout << endl;
        for(int i=0;i<n;i++){
            while(i<n && v[i+1].second-v[i].second==1){
                i++;
            }
            k++;
        }
        if(k<=m){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}