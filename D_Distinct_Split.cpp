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
        string s;
        cin >> s;
        map<char,int>f1,f2;
        vector<int>v1(n,0);
        vector<int>v2(n,0);
        f(i,0,n){
            f1[s[i]]++;
            v1[i]=f1.size();
        }
        for(int i=n-1;i>=0;i--){
            f2[s[i]]++;
            v2[i]=f2.size();
        }
        int ans = 0;
        f(i,0,n-1){
            ans=max(ans,v1[i]+v2[i+1]);
        }
        f(i,1,n){
            ans=max(ans,v1[i-1]+v2[i]);
        }
        cout << min(n,ans)<< endl;
    }
}