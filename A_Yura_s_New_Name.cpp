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
            if(s[0]=='^'){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }
            continue;
        }
        f(i,0,n){
            if(s[i]=='_' and s[i+1]=='_'){
                p++;
            }
        }
        if(s[0]=='_'){
            p++;
        }
        
        if(n>1 and s[n-1]=='_'){
            p++;
        }
        cout << p << endl;
    }
}
