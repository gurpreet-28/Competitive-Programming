#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
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

void DecimalToBinary(int n) {
    int binaryNumber[100]={0}, num=n;
    int i = 0;
    while (n > 0) {
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout<<num<<" - ";
    // for (int j = i - 1; j >= 0; j--)
    for (int j = i-1; j >= 0; j--)
        cout << binaryNumber[j];
    cout<<endl;
}

void solve(){
    int n, m, p=0, q,a,b,c;
    cin >> a >> b >> c;
    p=(a^b);
    q=0;
    while(p!=0){
        q+=(p%2);
        p/=2;
    }
    q=min(q,c);
    cout << (int)pow(2,q) << endl;
    // DecimalToBinary(a);
    // DecimalToBinary(b);
    // cout << endl;
    // f(i,0,pow(2,c)){
    //     cout << i << "-> " << (a|i)-(b&i) << endl;
    //     DecimalToBinary(i);
    //     DecimalToBinary((a|i)-(b&i));
    //     cout << endl;
    // }    
    
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