#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,c=0;
    cin >> n;
    string s,w;
    cin >> s >> w;
    f(i,0,n){
        if(s[i]=='R'){
            c++;
        }
        if(w[i]=='R'){
            c++;
        }
    }
    if(c==0){
        cout << "YES" << endl;
    }
    else{
        int p=0;
        for(int i=0;i<n;i++){
            if((s[i]==w[i]) || (s[i]=='G' && w[i]=='B') || (s[i]=='B' && w[i]=='G')){
                continue;
            }
            else{
                p=1;
                break;
            }
        }
        if(p==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

  }
}