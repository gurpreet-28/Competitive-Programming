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
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        string s;
        char d;
        cin >> n >> d >> s;
        if(s[0]<d){
            cout << d+s << endl;
            continue;
        }
        string ans="";
        int i=0;
        for(;i<n;i++){
            if(s[i]>=d){
                ans+=s[i];
            }
            else{
                if(p==0){
                    p=1;
                    ans+=d;
                }
                ans+=s[i];
            }
        }      
        if(p==0){
            ans+=d;
        }  
        cout << ans << endl;
    }
}
