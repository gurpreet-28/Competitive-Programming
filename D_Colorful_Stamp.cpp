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

void solve(){
    int n, m, p=0, q;
    cin >> n;
    string s;
    cin >> s;
    int r=0,b=0;
    f(i,0,n){
        if(s[i]=='R'){
            r=1;
        }
        else if(s[i]=='B'){
            b=1;
        }
        else{
            if(r^b){
                cout << "NO" << endl;
                return;
            }
            r=0;
            b=0;
        }
    }
    if(r^b){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        solve();                
    }
}