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
    string s;
    cin >> s;
    n=s.length();
    int a[n]={0};
    f(i,0,n){
        if(s[i]=='0'){
            a[i]=-1;
        }
        else if(s[i]=='1'){
            a[i]=1;
        }
    }    
    int i=0;
    int prev;
    while(i<n and s[i]=='?'){
        s[i]='0';
        i++;
        prev=-1;
    }
    if(i==0){
        prev=a[0];
    }
    for(;i<n;i++){
        if(s[i]=='?'){
            if(prev==-1){
                s[i]='0';
            }
            else{
                s[i]='1';
            }
        }
        else{
            prev=a[i];
        }
    }
    cout << s << endl;
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