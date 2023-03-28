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
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n;
        vector<vector<int>>v;
        while(n--){
            cin >> m;
            vector<int>temp(m);
            inputarray(temp,m);
            v.pb(temp);
        }
        map<int,int>mp;
        for(int i=0;i<v.size();i++){
            for(auto it: v[i]){
                mp[it]++;
            }
        }
        vector<int>ans;
        for(int i=0;i<v.size();i++){
            p=1;
            for(auto it: v[i]){
                if(mp[it]==1 and p==1){
                    ans.pb(it);
                    p=0;
                }
                mp[it]--;
            }
            if(p==1){
                break;
            }
        }
        if(p==1){
            cout << -1 << endl;
        }
        else{
            printarray(ans,ans.size());
        }
    }
}