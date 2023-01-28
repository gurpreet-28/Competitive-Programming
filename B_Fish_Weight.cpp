#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
        int n,p=0,q,m,k;
        cin >> n >> m >> k;
        int a[n],b[m];
        inputarray(a,n);
        inputarray(b,m);
        map<int,int,greater<int>>f;
        if(n>m){
            cout << "YES" << endl;
            continue;
        }
        f(i,0,n){
            f[a[i]]++;
        }
        f(i,0,m){
            f[b[i]]--;
        }
        for(auto i: f){
            p+=i.second;
            if(p>0){
                p=INT64_MAX;
                break;
            }
        }
        // cout << p << endl;
        if(p>0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

