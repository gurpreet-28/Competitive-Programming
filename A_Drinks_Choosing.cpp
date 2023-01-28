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
    int n,k,p,q,c=0;
    cin >> n >> k;
    int a[n];
    inputarray(a,n);
    arraysort(a);
    int freq1[n+1]={0};
    f(i,0,n){
        freq1[a[i]]++;
    }
    vector<int>v;
    int freq2[n+1]={0};
    for(int i=0;i<n;i+=2){
        v.pb(a[i]);
    }
    f(i,0,v.size()){
        freq2[v[i]]++;
    }
    f(i,0,n+1){
        freq2[i]*=2;
    }
    f(i,0,n+1){
        if(freq1[i]>freq2[i]){
            c+=freq1[i]-freq2[i];
        }
    }
    cout << n-c << endl;



  }
}