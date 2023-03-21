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

bool mycomp(string a, string b){
    return a.length()<b.length();
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m, p=0, q;
        cin >> n;
        vector<string>v;
        p=2*(n-1);
        f(i,0,p){
            string s;
            cin >> s;
            v.pb(s);
        }
        sort(v.begin(),v.end(),mycomp);
        q=0;
        for(int i=1;i<p;i+=2){
            reverse(all(v[i]));
            if(v[i-1]!=v[i]){
                q=1;
                break;
            }
        }
        if(!q){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
