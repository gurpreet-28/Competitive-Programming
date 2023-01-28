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
    int t;
    cin >> t;
    while (t--){
    int n,p=0;
    cin >> n;
    int a[n];
    inputarray(a,n);
    map<int,int>m1;
    map<int,int>m2;
    f(i,0,n){
        m1[a[i]]++;
    }
    for(auto i: m1){
        m2[i.first]=i.second/i.first;
    }
    for(auto i: m2){
        p+=i.first*i.second;
    }
    if(p!=n){
        cout << -1 << endl;
    }
    else{
        int ans[n];
        p=1;
        f(i,0,n){
            if(a[i])
        }
        cout << endl;   
    }

    }
}