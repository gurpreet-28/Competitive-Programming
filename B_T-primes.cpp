#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

bool isprime(int n){
    int flag=1,i;
    if(n<=1){
        return false;
    }
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,p,q,r,x,y;
    cin >> n;
    set<int>s;
    q=sqrt(n);
    if(q*q==n){
        n=n/q;
        if(isprime(n)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
    // for(int i=1;i<=sqrt(n);i++){
    //     if(n%i==0){
    //         s.insert(i);
    //         s.insert(n/i);
    //     }
    // }
    // p=s.size();
    // // cout << p << endl;
    // if(p==3){
    //     cout << "YES" << endl;
    // }
    // else{
    //     cout << "NO" << endl;
    // }
  }
}