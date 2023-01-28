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

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m=0, q;
        cin >> n >> m;
        int a[n],b[m];
        inputarray(a,n);
        inputarray(b,m);
        map<int,int>f;
        priority_queue<int>pq;
        f(i,0,n){
            f[a[i]]++;
        }
        for(auto i: f){
            pq.push(i.second);
        }
        sort(b,b+m);
        reverse(b,b+m);
        int ans = 0;
        for(int i=0;i<m;i++){
            int x = pq.top();
            pq.pop();
            int p = min(b[i], x);
            ans += p;
            x -= p;
            if (x > 0)
                pq.push(x);
            if (pq.size() == 0)
                break;
        }
        cout << ans << endl;
    }
}