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
    vector<int>a(n);
    vector<int>b(n);
    a.pb(0);
    b.pb(0);
    inputarray(a,n);
    inputarray(b,n);
    a.pb(0);
    b.pb(0);
    n+=2;
    p=0;
    int ans1=0,ans2=0;
    f(i,0,n){
        if(a[i]==0){
            ans1=max(ans1,p);
            p=0;
        }
        else{
            p++;
        }
    }
    p=0;
    f(i,0,n){
        if(b[i]==0){
            ans2=max(ans2,p);
            p=0;
        }
        else{
            p++;
        }
    }
    if(ans1==ans2){
        cout << "Draw" << endl;
    }
    else if(ans1<ans2){
        cout << "Addy" << endl;
    }
    else{
        cout << "Om" << endl;
    }



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