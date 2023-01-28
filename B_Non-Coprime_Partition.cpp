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
    int t=1;
    // cin >> t;
    while (t--){
    int n,p,q,r,x,y;
    cin >> n;
    if(n<=2){
        cout << "No" << endl;
        continue;
    }
    vector<int>s1;
    vector<int>s2;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            s2.pb(i);
        }
        else{
            s1.pb(i);
        }
    }
    cout << "Yes" << endl;
    cout << s1.size() << " ";
    f(i,0,s1.size()){
        cout << s1[i] << " ";
    }cout << endl;
    cout << s2.size() << " ";
    f(i,0,s2.size()){
        cout << s2[i] << " ";
    }cout << endl;

  }
}