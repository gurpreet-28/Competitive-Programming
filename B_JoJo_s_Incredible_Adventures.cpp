#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
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
        cin >> s;
        n=s.length();
        if(n==1){
            if(s[0]=='0'){
                cout << 0 << endl;
            }
            else{
                cout << 1 << endl;
            }
            continue;
        }
        f(i,0,n){
            if(s[i]=='0'){
                p=i;
                break;
            }
        }
        string s1="";
        f(i,p,n){
            s1+=s[i];
        }
        f(i,0,p){
            s1+=s[i];
        }
        reverse(all(s1));
        p=0;
        q=0;
        f(i,0,n){
            if(s1[i]=='1'){
                p++;
            }
            else{
                q=max(p,q);
                p=0;
            }
        }
        q=max(p,q);
        if(q==n){
            cout << n*n << endl;
            continue;
        }
        int ans=0;
        q++;
        f(i,1,q){
            ans=max((q-i)*i,ans);
        }
        cout << ans << endl;
    }
}