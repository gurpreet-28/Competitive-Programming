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

int power(int x, int y, int p)
{
 
    int res = 1; 
    while (y > 0) { 
        if (y % 2 == 1)
            res = (res * x);
 
        y = y >> 1;
 
        x = (x * x);
    }
    return res % p;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n;
        while(n!=0){
            p+=(n%2);
            n/=2;
        }
        int ans;
        int mod = 1e9+7;
        ans=power(3,p,mod);
        ans%=mod;

        ans-=power(2,p,mod);
        ans%=mod;
        
        ans-=power(2,p,mod);
        ans%=mod;
        
        ans-=power(2,p,mod);
        ans%=mod;

        cout << (ans+3+mod)%mod << endl;
    }
}