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

int lucky(int n){
    string i = to_string(n);
    sort(all(i));
    return (i[i.length()-1]-i[0]);
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, q;
        cin >> n >> m;
        int ans=0,p=0;
        for(int i=n;i<=m;i++){
            if(lucky(i)>=p){
                p=lucky(i);
                ans=i;
            }
            if(p==9){
                break;
            }
        }
        cout << ans << endl;
    }
}