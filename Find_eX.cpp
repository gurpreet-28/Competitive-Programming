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

int lcm(int a, int b){
    return (a*b)/__gcd(a,b);
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int a,b,c,d,p=1;
        cin >> a >> b >> c >> d;
        if((a+1)%b == (c+1)%d){
            cout << 1 << endl;
            continue;
        }
        cout << lcm(b,d)-a%b << endl;
    }
}