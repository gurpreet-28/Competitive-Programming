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

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
    int n,p,q,r,x,i,j,y;
    cin >> n;
    vector<int>v;
    for (int i=1; i<=sqrt(n); i++){
        if (n%i == 0){
            if (n/i == i){
                v.pb(i);
            }
            else{
                v.pb(i);
                v.pb(n/i);
            }
        }
    }
    sort(all(v));
    r=v.size();
    // cout << r << endl;
    // printarray(v,r);
    p=v[0];
    q=v[r-1];
    if(r%2==0){
        i=(r-1)/2;
        j=i+1;
    }
    else{
        i=r/2;
        j=i+2;
    }
    // cout << i << " " << j << endl;
    int sum=p+q;
    i=0,j=r-1;
    while(i<j){
        if(__gcd(v[i],v[j])==1){
            if(v[i]+v[j]<sum){
                p=v[i];
                q=v[j];
                sum=v[i]+v[j];
            }
        }
        i++;
        j--;
    }
    cout << p << " " << q << endl;
    

  }
}