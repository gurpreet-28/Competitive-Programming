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
    string s;
    cin >> s;
    int a[n];
    f(i,0,n){
        if(s[i]=='(')   
            a[i]=-1;
        else
            a[i]=1;
    }
    f(i,1,n){
        a[i]+=a[i-1];
    }
    if(a[n-1]!=0){
        cout << -1 << endl;
        return;
    }
    int ans[n]={0};
    int st;
    st=a[0];
    if(a[0]==-1){
        ans[0]=2;
    }
    else{
        ans[0]=1;
    }
    int i=1;
    while(i<n){
        if(st==1){
            while(i-1<n and a[i-1]!=0){
                ans[i]=1;
                i++;
            }
            if(i<n){
                st=a[i];
            }
        }
        else{
            while(i-1<n and a[i-1]!=0){
                p++;
                ans[i]=2;
                i++;
            }
            if(i<n){
                st=a[i];
            }
        }
        i++;
    }
    for(int i=n-2;i>=0;i--){
        if(ans[i]==0){
            ans[i]=ans[i+1];
        }
    }
    if(p>0){
        cout << 2 << endl;
    }
    else{
        cout << 1 << endl;
    }
    printarray(ans,n);
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