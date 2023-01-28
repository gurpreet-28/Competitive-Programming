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
        int n, m, p=0, q=-1;
        cin >> n;
        string s;
        cin >> s;
        vector<int>v;
        int i=0;
        for(i=0;i<n;i++){
            if(s[i]=='1'){
                q=i;
                break;
            }
        }
        for(;i<n;i++){
            if(s[i]=='1'){
                p++;
            }
            else{
                v.pb(p);
                p=0;
            }
        }    
        if(p!=0){
            v.pb(p);
        }    
        vector<int>vec;
        for(auto i: v){
            if(i!=0){
                vec.pb(i);
            }
        }
        // printarray(vec,vec.size());
        if(q==0){
            int mx=0;
            if(vec.size()>1)
                mx=*max_element(vec.begin()+1,vec.end());
            cout << vec[0]+mx << endl;
        }
        else if(q!=-1){
            int mx=0;
            if(vec.size()>0)
                mx = *max_element(vec.begin(),vec.end());
            cout << mx << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}