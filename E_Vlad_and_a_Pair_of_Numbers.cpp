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

string tobin(int n){
    string s="";
    while(n!=0){
        s+=((n%2)+'0');
        n/=2;
    }
    reverse(all(s));
    return s;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m, p=0, q;
        cin >> n;
        p=(n^(n/2));
        q=2*n-p;
        if((p^q)==n){
            cout << p <<" " << q << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}