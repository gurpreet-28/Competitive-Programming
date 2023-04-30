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

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q=0;
        cin >> n;
        string s;
        cin >> s;
        f(i,0,n){
            if(s[i]=='1'){
                p++;
            }
            else{
                q++;
            }
        }        
        m=min(p,q);
        if(m%2==0){
            cout << "Ramos" << endl;
        }
        else{
            cout << "Zlatan" << endl;
        }
    }
}