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
        cin >> s;
        sort(all(s));
        int f[10]={0};
        f[s[0]-'0']++;
        f[s[1]-'0']++;
        f[s[2]-'0']++;
        f[s[3]-'0']++;
        if(s[0]==s[3]){
            cout << -1 << endl;
            continue;
        }
        else{
            int mx=0;
            f(i,0,10){
                mx=max(mx,f[i]);
            }
            if(mx==3){
                cout << 6 << endl;
            }
            else{
                cout << 4 << endl;
            }
        }
        
    }
}