#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n,p=0,q,h,m,a,b,c=1440;
        cin >> n >> h >> m;
        p=h*60+m;
        f(i,0,n){
            int h1,m1;
            cin >> h1 >> m1;
            q=60*h1+m1;
            a=p-q;
            b=1440-a;
            b%=1440;
            c=min(b,c);
        }        
        cout << c/60 << " " << c%60 << endl;
    }
}