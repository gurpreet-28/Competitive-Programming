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

int fib[50];

void compute(){
    fib[0]=1;
    fib[1]=1;
    for(int i=2;i<46;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
}


bool solve(int n,int x, int y){
    if(n==1){
        return true;
    }
    if(y>fib[n]){
        return solve(n-1,y-fib[n],x);
    }
    else if(fib[n+1]-y>=fib[n]){
        return solve(n-1,y,x);
    }
    return false;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    compute();
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q, x, y;
        cin >> n >> x >> y;
        if(solve(n,x,y)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}