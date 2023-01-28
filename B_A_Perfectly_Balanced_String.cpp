#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define sz                size()
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
        string s;
        cin >> s;
        n=s.sz;
        set<char>st;
        int i;
        for(i=0;i<n;i++){
            if(st.find(s[i])==st.end()) 
                st.insert(s[i]);
            else{
                break;
            }
        }
        // cout << i << endl;
        for(int k=i;k<n;k++){
            if(s[k]!=s[k-i]){
                p=1;
                break;
            }
        }
        if(p==0){
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}