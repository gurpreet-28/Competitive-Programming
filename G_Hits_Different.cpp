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
vector<int>a;
vector<int>b;
void solve(){
    int n, m, p=0, q;
    cin >> n;
    int ans=0;
    if(binary_search(all(a),n)){
        for(auto i: a){
            if(i>n){
                break;
            }
            ans+=(i*i);
        }
        cout << ans << endl;
        return;
    }
    if(binary_search(all(b),n)){
        for(auto i: b){
            if(i>n){
                break;
            }
            ans+=(i*i);
        }
        cout << ans << endl;
        return;
    }
    int level=0;
    for(auto i: a){
        if(i>n){
            break;
        }
        level++;
    }
    // cout << level << endl;
    int l=n-a[level-1];
    int r=n-a[level-1];
    while(level>0){
        l=max(0LL,l);
        r=min(r,abs((level*(level+1)/2)-level*(level-1)/2)-1);
        int st=a[level-1]+l;
        int en=a[level-1]+r;
        // cout << l << " " << r << endl;
        // cout << st << " " << en << endl << endl;
        f(i,st,en+1){
            ans+=(i*i);
        }
        level--;
        l--;
    }
    cout << ans << endl;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    f(i,1,1e6+1){
        b.pb((i*(i+1))/2);
        a.pb(((i*(i+1))/2)-i+1);
    }
    while (testcases--){
        solve();
    }
}