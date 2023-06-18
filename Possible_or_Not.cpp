#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a,n)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

void solve(){
    int n, m, p=0, q;
    cin >> n >> m;
    int a[n];
    inputarray(a,n);
    vector<int>v;
    q=-1;
    f(i,0,n){
        if(a[i]==m){
            cout << "YES" << endl;
            return ;
        }
        if((a[i]&m)==m){
            if(q==-1){
                q=a[i];
            }
            else{
                q&=a[i];
            }
            p++;
        }
    }
    if(q==m){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    // printarray(a,n);
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        solve();
    }
}
