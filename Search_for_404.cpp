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
    int n, m,mod=1e9+7, p=0, q;
    cin >> n;
    string s;
    cin >> s;
    vector<int>starpref(n,0);    
    vector<int>starsuff(n,0);    
    vector<int>fourpref(n,0);
    vector<int>foursuff(n,0);
    int star=0;
    f(i,0,n){
        if(s[i]=='*'){
            star++;
        }
    }

    f(i,1,n){
        if(s[i-1]=='*'){
            starpref[i] = starpref[i-1]+1;
        }
        else{
            starpref[i] = starpref[i-1];
        }
    }    
    for(int i=n-2;i>=0;i--){
        if(s[i+1]=='*'){
            starsuff[i] = starsuff[i+1]+1;
        }
        else{
            starsuff[i] = starsuff[i+1];
        }
    }

    f(i,1,n){
        if(s[i-1]=='4'){
            fourpref[i] = fourpref[i-1]+1;
        }
        else{
            fourpref[i] = fourpref[i-1];
        }
    }    
    for(int i=n-2;i>=0;i--){
        if(s[i+1]=='4'){
            foursuff[i] = foursuff[i+1]+1;
        }
        else{
            foursuff[i] = foursuff[i+1];
        }
    }

    // printarray(starpref,n);
    // printarray(starsuff,n);
    // cout << endl;
    // printarray(fourpref,n);
    // printarray(foursuff,n);

    int ans=0;
    f(i,0,n){
        int p=1;
        if(s[i]=='0' || s[i]=='*'){
            // 4 0 4
            int z=0;
            if(s[i]=='*'){
                z=1;
            }
            p*=fourpref[i];
            p%=mod;
            p*=foursuff[i];
            p%=mod;
            p*=power(2,star-z,mod);
            ans+=p;
            ans%=mod;

            // 4 0 *
            p=1;
            p*=fourpref[i];
            p%=mod;
            p*=starsuff[i];
            p%=mod;

            int q = star-1-z;
            if(q>=0){
                p*=power(2,q,mod);
                p%=mod;
                ans+=p;
                ans%=mod;
            }
            // /* 0 4
            p=1;
            p*=foursuff[i];
            p%=mod;
            p*=starpref[i];
            p%=mod;

            q = star-1-z;
            if(q>=0){
                p*=power(2,q,mod);
                p%=mod;
                ans+=p;
                ans%=mod;
            }


            // /* 0 *
            p=1;
            p*=starsuff[i];
            p%=mod;
            p*=starpref[i];
            p%=mod;

            q = star-2-z;
            if(q>=0){
                p*=power(2,q,mod);
                p%=mod;
                ans+=p;
                ans%=mod;
            }

        }
    }
    cout << ans << endl;
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