#include <bits/stdc++.h>
// #define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

bool points[2002][2002];

signed main (){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
        int n, p=0, q;
        cin >> n;
        int a[n][2];
        f(i,0,n){
            int x,y;
            cin >> x >> y;
            a[i][0]=x;
            a[i][1]=y;
            points[x+1000][y+1000]=true;
        }
        int ans=0;
        f(i,0,n){
            f(j,i+1,n){

                int x=(a[i][0]+a[j][0]);
                int y=(a[i][1]+a[j][1]);
                
                if(x%2!=0 || y%2!=0){
                    continue;
                }
                x/=2;
                y/=2;
                if(points[x+1000][y+1000]){
                    ans++;
                }
            }
        }
        cout << ans << endl;
        
    }
}