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
        cin >> n;
        string s;
        cin >> s;
        char ch = *min_element(all(s));
        if(s[0]==ch){
            int i=0;
            while(s[i]==ch){
                i++;
            }
            char s_ch = 'z';
            for(;i<n;i++){
                if(s_ch>=s[i]){
                    s_ch=s[i];
                    p=i;
                }
            }
            // cout << s_ch << endl;
            string ans="";
            if(s_ch<=ch){
                ans+=s_ch;
                f(j,0,n){
                    if(j==p){
                        continue;
                    }
                    ans+=s[j];
                }
                cout << ans << endl;
            }
            else{
                cout << s << endl;
            }
            continue;
        }
        f(i,0,n){
            if(s[i]==ch){
                p=i;
            }
        }
        string ans="";
        ans+=ch;
        f(i,0,n){
            if(i==p){
                continue;
            }
            ans+=s[i];
        }
        cout << ans << endl;        
    }
}