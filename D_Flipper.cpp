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

vector<int> solve1(int l,int r,vector<int> a,int n){
    vector<int>ans;
    int i1=l,j1=r;
    while(i1<j1){
        swap(a[i1++],a[j1--]);
    }
    f(i,r+1,n){
        ans.pb(a[i]);
    }
    f(i,l,r+1){
        ans.pb(a[i]);
    }
    f(i,0,l){
        ans.pb(a[i]);
    }
    return ans;
}

void solve(){
    int n, m, p=0, q;
    cin >> n;
    vector<int>a(n);
    inputarray(a,n);
    if(n==1){
        cout << a[0] << endl;
        return;
    }
    int mx=n;
    int i=0;
    if(a[0]==n){
        mx=n-1;
    }
    int l,r;
    for(int i=n-1;i>=0;i--){
        if(a[i]==mx){
            r=i-1;
            break;
        }
    }
    vector<int>ans=solve1(r,r,a,n);
    for(int i=r-1;i>=0;i--){
        vector<int>temp=solve1(i,r,a,n);
        if(ans<temp){
            ans=temp;
        }
    }
    for(int i=min(n-1,r+1);i>=0;i--){
        vector<int>temp=solve1(i,min(r+1,n-1),a,n);
        if(ans<temp){
            ans=temp;
        }
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