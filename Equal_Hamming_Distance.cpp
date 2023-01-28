#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;
vector<int>fac;
int MOD=1e9+7;
int power(int a, int b, int p)
{
    if (a == 0)
        return 0;
    int res = 1;
    a %= p;
    while (b > 0)
    {
        if (b & 1)
            res = (1ll * res * a) % p;
        b >>= 1;
        a = (1ll * a * a) % p;
    }
    return res;
}
int modInverse(int n, int p)
{
    return power(n, p - 2, p);
}

// Returns nCr % p using Fermat's little
// theorem.
int nCrModPFermat(int a,int b) {
    if(a<b) {
        return 0;
    }
    return ((fac[a]*modInverse(fac[b],MOD))%MOD*modInverse(fac[b],MOD))%MOD;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    int n1=2e5+1;
    fac.push_back(1);
    int p=1;
    for(int i=1;i<=n1;i++){
        p=(p*i)%MOD;
        fac.push_back(p);
    }

    while (t--){
        int n, m = 1e9+7, p=0, q;
        cin >> n;
        string s1,s2;
        cin >> s1 >> s2;
        string s3="";
        int setbits = 0;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                s3+='1';
                setbits++;
            }
            else{
                s3+='0';
            }
        }
        // f(i,0,n){
        //     if(s3[i]=='1'){
        //         setbits++;
        //     }
        // }
        // cout << s3 << endl;
        vector<int>v;
        vector<int>ones;
        for(int i=0;i<n;i++){
            if(s3[i]=='0'){
                v.pb(1);
            }
            else{
                p=0;
                while(i<n && s3[i]=='1'){
                    p++;
                    i++;
                }
                ones.pb(p);
                i--;
            }
        }
        // cout << s3 << endl;
        // printarray(v,v.size());
        
        // int ans=1;
        // p=accumulate(all(v),0);
        // ans = power(2,p,m)%m;
        // q=0;
        // if(p==0 && n%2==1){
        //     cout << 0 << endl;
        //     continue;
        // }
        // if(p==0){
        //     ans=1;
        // }
        // for(auto i : ones){
        //     int res;
        //     if(i%2==1){
        //         continue;
        //     }
        //     res=nCrModPFermat(i,i/2,m);
        //     res+=2;
        //     q+=res;
        // }
        // if(q==0){
        //     q=1;
        // }
        // cout << (q*ans)%m << endl;



        // if(setbits % 2 == 1){
        //     cout << 0 <<endl;
        //     continue;
        // }
        // ans = power(2,n-setbits,m);
        // int res = (nCrModPFermat(setbits,setbits/2))%m;
        // cout << (ans*res)%m << endl;
        
        int ans=1;
        if(setbits % 2 == 1){
            cout << 0 << endl;
            continue;
        }
        ans=power(2,n-setbits,MOD);
        cout << ans*(nCrModPFermat(setbits ,setbits/2)) % m << endl;
        
    }
}
