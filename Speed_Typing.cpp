#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,m;
    cin >> t;
    m=t;
    while (t--){
    int n1,n2,p,q,r,x,y,i=0,j=0;
    string s,w;
    cin >> s >> w;
    n1=s.length();
    n2=w.length();
    int ans=0;
    while(i<n1 && j<n2){
        if(s[i]==w[i]){
            i++;
            j++;
            continue;
        }
        if(s[i]!=w[i]){
            ans++;
            j++;
            continue;
        }
    }
    cout << "Case #" << m-t << ": ";
    if(j!=n2){
        cout << n2-j << endl;
        continue;
    }
    if((n2-ans)!=n1){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        cout << ans << endl;
    }


  }
}
