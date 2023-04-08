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
        cin >> n >> m;
        int a[4];
        inputarray(a,4);
        if((a[0]==1 and (a[1]==1||a[1]==m)) || (a[2]==1 and (a[3]==1||a[3]==m))){
            cout << 2 << endl;
            continue;
        }       
        if((a[0]==n and (a[1]==1||a[1]==m)) || (a[2]==n and (a[3]==1||a[3]==m))){
            cout << 2 << endl;
            continue;
        }       
        if((a[0]==1 || a[0]==n || a[1]==1 || a[1]==m) || (a[2]==1 || a[2]==n || a[3]==1 || a[3]==m)){
            cout << 3 << endl;
            continue;
        }
        else{
            cout << 4 << endl;
        }
        
    }
}