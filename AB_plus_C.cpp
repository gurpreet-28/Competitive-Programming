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

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n;
        int a=-1,b=-1,c=-1;
        if(n==1){
            cout << -1 << endl;
            continue;
        }        
        if(n>1e6)
            if(n%1000000==0)    
                cout << (n/1000000)-1 << " 1000000 " << 1000000 << endl;
            else
                cout << (n/1000000) << " 1000000 " << n%1000000 << endl;
        else{
            cout << 1 << " 1 " << n-1 << endl;
        }
    }
}

