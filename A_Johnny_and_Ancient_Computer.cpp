#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
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
        int p=0,q;
        cin >> p >> q;
        int a;
        double n=(double)max(p,q)/(double)min(q,p)*(1.0);
        a=n;
        if(a*min(p,q)!=max(p,q)){
            cout << -1 << endl;
            continue;
        }
        if(n-(int)n>0){
            cout << -1 << endl;
            continue;
        }
        int c=0,r=0;
        int m=n;
        while(m!=0){
            c+=(m%2);
            r++;
            m/=2;
        }
        if(c!=1){
            cout << -1 << endl;
            continue;
        }
        int temp=n;
        int ans=0;
        while(temp%8==0 && temp!=0){
            temp/=8;
            ans++;
        }
        while(temp%4==0 && temp!=0){
            temp/=4;
            ans++;
        }
        while(temp%2==0 && temp!=0){
            temp/=2;
            ans++;
        }
        cout << ans << endl;     
    }
}