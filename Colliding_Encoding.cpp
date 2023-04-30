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
    int T; cin >> T;
    for (auto case_num = 1; case_num <= T; ++ case_num) {
        int n;
        string ans="";
        int freq[26];
        f(i,0,26){
            cin >> freq[i];
        }
        cin >> n;
        vector<string>v(n);
        f(i,0,n){
            cin >> v[i];
        }
        map<string,int>mp;
        for(auto s: v){
            string t="";
            for(char i: s){
                t+=to_string(freq[i-'A']);
            }
            if(mp.find(t)!=mp.end()){
                ans="YES";
                break;
            }
            mp[t]++;
        }
        if(ans.size()==0){
            ans="NO";
        }
        cout << "Case #" << case_num << ": " << ans << endl;
    }
}
