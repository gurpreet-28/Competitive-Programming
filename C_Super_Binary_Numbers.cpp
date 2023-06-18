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

bool isPalin(string s){
    int n=s.length();
    int i=0,j=n-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void solve(){
    int n, m, p=0, q;
    cin >> n;
    char hexa[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string bin="",hex="",deci=to_string(n);
    p=n;
    while(p!=0){
        // cout << hexa[p] << endl;
        hex+=hexa[(p%16)];
        p/=16;
    }
    p=n;
    while(p!=0){
        bin+=to_string(p%2);
        p/=2;
    }
    q=0;
    if(isPalin(hex)){
        q++;
    }
    if(isPalin(deci)){
        q++;
    }
    if(isPalin(bin)){
        q++;
    }
    if(q>=2){
        cout << "ghavi" << endl;
    }
    else{
        cout << "fanni khordim" << endl;
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