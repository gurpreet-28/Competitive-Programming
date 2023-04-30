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
        string s;
        cin >> s;
        n=s.length();
        map<char,int>mp;
        vector<char>t;
        f(i,0,n){
            mp[s[i]]++;
        }
        int j=0;
        for(auto i: mp){
            t.pb(i.first);
        }
        if(t.size()==1){
            cout << 0 << endl;
            continue;
        }
        int ans=INT_MAX;
        while(j<t.size()){
            vector<int>v;
            char ch = t[j];
            j++;
            int p=0;
            f(i,0,n){
                if(s[i]!=ch){
                    p++;
                }
                else{
                    if(p!=0){
                        v.pb(p);
                        p=0;
                    }
                }
            }
            if(p!=0){
                v.pb(p);
                p=0;
            }
            int q = *max_element(all(v));
            double r = log10(q)/log10(2);
            ans = min(ans,(int)(r)+1);
        }
        cout << ans << endl;
    }
}