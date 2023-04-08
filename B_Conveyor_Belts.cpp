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
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q ,x1,x2,y1,y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        int ans=0;
        p=min(x1,n-x1+1);
        int box1= min({p,y1,n-y1+1});
        
        q=min(x2,n-x2+1);
        int box2 = min({q,y2,n-y2+1});
        cout << abs(box2-box1) << endl;        
    }
}