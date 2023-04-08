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
        int n, m, p=0, q;
        cin >> n;
        vector<int>a(n);
        vector<int>b;
        inputarray(a,n);
        if(n==2){
            cout << "NO" << endl;
            continue;
        }
        b=a;
        sort(all(b));
        int z=b[n-1]+b[n-2];
        if(b[n-1]!=b[n-2]){
            if(b[0]!=b[n-2])
                cout << "YES" << endl;
            else{
                cout << "NO" << endl;
            }
        }
        else{
            p=b[n-1];
            q=0;
            f(i,0,n){
                if(a[i]==p){
                    q++;
                }
            }
            if(q<=(n+1)/2){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}