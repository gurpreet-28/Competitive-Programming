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
    // cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        cin >> m;
        int b[m];
        inputarray(b,m);        
        arraysort(a);
        arraysort(b);
        set<int>s;
        
        s.insert(0);
        f(i,0,n){
            s.insert(a[i]);
        }
        f(i,0,m){
            s.insert(b[i]);
        }
        s.insert(2e9+1);

        int maxDiff = INT_MIN,aScore,bScore;
        for(auto i: s){
            cout << i << "--> ";
            
            int idx1 = upper_bound(a,a+n,i)-a;
            int idx2 = upper_bound(b,b+m,i)-b;
            
            cout << idx1 << " " << idx2 << endl;
            
            int dif1 = 2*idx1+3*(n-idx1);
            int dif2 = 2*idx2+3*(m-idx2);
            
            cout << dif1 << " " << dif2 << endl;
            if(dif1 - dif2>maxDiff){
                maxDiff = dif1-dif2;
                aScore = dif1;
                bScore = dif2;
            }
            if(dif1 - dif2 == maxDiff){
                if(dif1>aScore){
                    maxDiff = dif1-dif2;
                    aScore = dif1;
                    bScore = dif2;
                }
            }
            cout << maxDiff << endl << endl;
        }
        cout << aScore << ":" << bScore << endl;
    }
}