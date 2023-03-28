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
        int n, m, p=0,k, q;
        cin >> n >> k;
        string s,w;
        cin >> s >> w;
        vector<int>v;
        int f[26]={0};
        int f1[26]={0};
        for(int i=0;i<n;i++){
            f[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            f1[w[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(f[i]!=f1[i]){
                p=1;
                break;
            }
        }
        if(p==1){
            cout << "NO" << endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(i+k>=n && i-k<0){
                    v.pb(i);
                }
            }
            for(auto i: v){
                if(s[i]!=w[i]){
                    p=1;
                    break;
                }
            }
            if(p==1){
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
    }
}