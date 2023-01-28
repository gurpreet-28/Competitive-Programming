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
    cin >> t;
    while (t--){
        int n,p=0,q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        vector<int>v;
        vector<int>v1;
        f(i,0,n){
            if(a[i]%2==1)
                v.pb(a[i]);
            else{
                v1.pb(a[i]);
            }
        }
        if(is_sorted(all(v)) && is_sorted(all(v1))){
            // if(v.size()==0){
            //     if(is_sorted(a,a+n)){
                    cout << "Yes" << endl;
            //     }
            //     else{
            //         cout << "No" << endl;
            //     }
            // }
            // else{
                // cout << "Yes" << endl;
            // }
        }
        else{
            cout << "No" << endl;
        }
    }
}