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
        int n, m, p=0, q;
        cin >> n;
        string s,w="";
        cin >> s;
        vector<string>st,str;
        f(i,0,n){
            w+=s[i];
            st.push_back(w);
        }   
        w="";
        for(int j=n-1;j>=0;j--){
            w=s[j]+w;
            str.pb(w);
        }     
        reverse(all(str));
        map<string,int>mp;
        f(i,0,n-3){
            mp[st[i]+str[i+3]]++;
            mp[str[i]+st[i+3]]++;
        }
        mp[str[2]]++;
        mp[st[n-2]]++;
        for(auto i:mp){
            p++;
        }
        for (auto i: st){
            cout << i << "\t";
        }
        cout << endl;
        for (auto i: str){
            cout << i << "\t";
        }
        cout << endl;
        cout << p-1 << endl;
    }
}