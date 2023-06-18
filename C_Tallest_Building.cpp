#include <bits/stdc++.h>
// #define int               long long
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
// 5 1 6 2 8 3 4 10 9 7
void solve(){
    int n, m, q;
    cin >> n;
    int l=1,r=n;
    while(l<=r){
        int a,b,p;
        int mid = (l+r)/2;
        cout << "? " << l << " " << r << endl;
        cin >> p;
        if(mid>=p){
            cout << "? " << l << " " << mid << endl;
            cin >> a;
            if(a==p){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else{
            cout << "? " << mid << " " << r << endl;
            cin >> a;
            if(a!=p){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
    }
    if(l==r){
        cout << "! " << l << endl;
    }
    else{
        cout << "? " << l << " " << r << endl;
        cin >> q;
        if(q==l){
            cout << "! " << r << endl;
        }
        else{
            cout << "! " << l << endl;
        }
    }
}

signed main (){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        solve();
    }
}