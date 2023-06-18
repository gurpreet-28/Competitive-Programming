#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a,n)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

int power(int a, int b, int p){
    if(a==0)
        return 0;
    int res=1;
    a%=p;
    while(b>0){
        if(b&1)
        res=(1ll*res*a)%p;
        b>>=1;
        a=(1ll*a*a)%p;
    }
    return res;
}

int lcm(int a, int b){
    if(a==0 || b==0)
        return 0;
    return (a*b)/__gcd(a,b);
}

void solve(){
    int n, m, p=0, q;
    cin >> n;
    int a[n];
    inputarray(a,n);
    int used[n]={0};
    sort(a,a+n);
    int b[n],j=0;
    b[j++]=a[n-1];
    used[n-1]=1;
    f(i,0,n){
        p=p|a[i];
    }
    int r=a[n-1];
    while(r!=p){
        int x=r,idx,q;
        f(i,0,n){
            if(!used[i]){
                if((r|a[i])>x){
                    x=(r|a[i]);
                    q=a[i];
                    idx=i;
                }
            }
        }
        used[idx]=1;
        b[j++]=q;
        r|=a[idx];
    }
    f(i,0,n){
        if(!used[i]){
            b[j++]=a[i];
        }
    }
    printarray(b,n);
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        solve();
    }
}