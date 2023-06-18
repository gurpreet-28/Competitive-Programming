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

bool ispermutation(int b[],int n){
    int a[n];
    f(i,0,n){
        a[i]=b[i];
    }
    arraysort(a);
    int p=1;
    f(i,0,n){
        if(a[i]!=p){
            return false;
        }
        p++;
    }
    return true;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n;
        if(n==1){
            cout << 1 << endl;
            continue;
        }
        int ans[n];
        p=2;
        ans[0]=n;
        ans[1]=1;
        for(int i=2;i<n;i+=2){
            ans[i]=ans[i-2]-2;
        }
        for(int i=3;i<n;i+=2){
            ans[i]=ans[i-2]+2;
        }
        if(n%2==1){
            cout << -1 << endl;
        }
        else{
            printarray(ans,n);
        }
    }
}