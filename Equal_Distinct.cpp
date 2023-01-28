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
    int n,p,q,r,x,y,sin=0,dou=0;
    cin >> n;
    int a[n];
    inputarray(a,n);
    set<int>s;
    f(i,0,n){
        s.insert(a[i]);
    }
    if(s.size()%2==0){
        cout << "YES" << endl;
    }
    else{
        unordered_map<int,int>f;
        f(i,0,n){
            f[a[i]]++;
        }
        f(i,0,n){
            if(f[a[i]]==1){
                sin++;
            }
            else{
                dou++;
            }
        }
        if(dou==0){
            if(sin%2==0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "YES" << endl;
        }

    }
  }
}