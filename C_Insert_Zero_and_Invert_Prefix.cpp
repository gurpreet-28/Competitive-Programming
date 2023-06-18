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
    if(a[n-1]==1){
        cout << "NO" << endl;
        return;
    }
    vector<int>num1(n,0);
    vector<int>vis(n,0);
    p=0;
    f(i,0,n){
        if(a[i]==1 and !vis[i]){
            int j=i;
            while(j<n and a[j]==1){
                vis[j]=1;
                p++;
                j++;
            }
        }
        if(a[i]==1){
            num1[i]=p;
        }
        else{
            p=0;
        }
    }
    vector<int>ans(n,0);
    cout << "YES" << endl;
    p=1;
    int i=1;
    int st=0;
    for(int i=0;i<n;i++){
        if(st!=num1[i] and a[i]==1){
            ans[i]=num1[i];
        }
        st=num1[i];
    }
    reverse(all(ans));
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