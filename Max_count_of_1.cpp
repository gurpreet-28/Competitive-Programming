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
	    int n,k;
	    cin >> n;
	    string s;
	    int x[n],y[n];
	    cin >> s;
	    x[0]=0;
        y[0]=1;
        f(i,1,n){
            x[i]=(x[i-1]^(s[i-1]-'0'));
            y[i]=(y[i-1]^(s[i-1]-'0'));
        }
        int p=0,q=0;
        f(i,0,n){
            if(x[i]==1){
                p++;
            }
            if(y[i]==1){
                q++;
            }
        }
        cout << max(p,q) << endl;
    }
}