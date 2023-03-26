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
    // cin >> t;
    while (t--){
        int n, m, p=0,k, q;
        cin >> n >> k;
        vector<int>v;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(i*i==n)
                    v.push_back(i);
                else{
                    v.push_back(i);
                    v.push_back(n/i);
                }
            }
        }
        sort(all(v));
        if(v.size()<k){
            cout << -1 << endl;
        }
        else
            cout << v[k-1] << endl;
    }
}