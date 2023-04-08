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
        int n, m, q;
        cin >> n >> m;
        double line[n], para[m][3];
        inputarray(line,n);
        f(j,0,m){
            f(i,0,3){
                cin >> para[j][i];
            }
        }
        arraysort(line);
        for(int i=0;i<m;i++){
            double p = 0.0;
            if(para[i][2]<0){
                cout << "NO" << endl;
                continue;
            }
            int ans=-1;
            double a1,c1;
            a1=sqrtl((double)para[i][0]);
            c1=sqrtl((double)para[i][2]);
            p=2.0*a1*c1;

            // cout << p << endl;
            
            double l,r;
            l=(double)para[i][1]-p;
            r=(double)para[i][1]+p;
            
            

            int idx = lower_bound(line,line+n,l+0.001)-line;
            if(idx==n){
                cout << "NO" << endl;
                continue;
            }
            if(line[idx]>l and line[idx]<r){
                cout << "YES" << endl;
                cout << (int)line[idx] << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }        
        cout << endl;
    }
}