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

void solve(){
    int n, m, p=0, q,r;
    cin >> n;
    int a[n];
    inputarray(a,n);
    f(i,0,n){
        if(a[i]==1){
            p=i;
        }
        if(a[i]==2){
            q=i;
        }
        if(a[i]==n){
            r=i;
        }
    }
    p++;
    q++;
    r++;
    if(p<q){
        if(p<q and q<r){
            cout << q << " " << r << endl;
            return;
        }
        if(p<q and r<p){
            cout << p << " " << r << endl;
        }
        else{
            cout << p << " " << p << endl;
        }
    }
    else{
        if(q<p and p<r){
            cout << p << " " << r << endl;
            return;
        }
        if(q<p and r<q){
            cout << q << " " << r << endl;
        }
        else{
            cout << p << " " << p << endl;
        }
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