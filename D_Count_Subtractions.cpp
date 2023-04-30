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

int ans=0;
void gcd(int a, int b){
    // ans++;
    if(a==b){
        return;
    }
    if(a<b){
        swap(a,b);
    }
    if(a%b!=0){
        ans+=a/b;
        gcd(b, a%b);
    }
    else{
        ans+=((a/b)-1);
        return;
    }
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
        gcd(n,m);
        cout << ans << endl;        
    }
}