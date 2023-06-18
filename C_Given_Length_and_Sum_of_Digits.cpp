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
    cin >> n >> m;
    if(m==0){
        if(n==1){
            cout << 0 << " " << 0 << endl;
        }
        else{
            cout << -1 << " " << -1 << endl;
        }
        return;
    }    
    if(9*n<m){
        cout << -1 << " " << -1 << endl;
        return;
    }
    string s="";
    p=n;
    q=m;
    int a[n]={0};
    a[0]=1;
    m--;
    for(int i=n-1;i>=0;i--){
        if(m>=9){
            a[i]=9;
            m-=9;
        }
        else{
            a[i]+=m;
            break;
        }
    }
    f(i,0,n){
        s+=(a[i]+'0');
    }
    n=p;
    m=q;
    sort(all(s));
    string w=s,t="";
    reverse(all(w));
    if(m<10){
        t=(m+'0');
        f(i,1,n){
            t+='0';
        }
        if(t>w){
            w=t;
        }
    }

    int b[n]={0};
    string s1="";
    for(int i=n-1;i>=0;i--){
        if(m>=9){
            m-=9;
            b[i]=9;
        }
        else{
            b[i]+=m;
            break;
        }
    }
    f(i,0,n){
        s1+=(b[i]+'0');
    }
    sort(all(s1));
    reverse(all(s1));

    if(w<s1){
        w=s1;
    }

    f(i,0,s.length()){
        if(s[i]!='0'){
            swap(s[i],s[0]);
            break;
        }
    }
    cout << s << " ";
    cout << w << endl;



}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        solve();
    }
}