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

int k=0;
void solve(vector<int>&v,int sum, int idx, int a[],int n){
    if(idx==n){
        v.pb(sum);
        return;
    }
    solve(v,sum+a[idx],idx,a,n);
    solve(v,sum,idx+1,a,n);
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n >> m;
        int a[n];
        inputarray(a,n);
        vector<int>v;
        solve(v,0,0,a,n);
        sort(all(v));
        printarray(v,50);
        cout << v.size() << endl;
    }
}