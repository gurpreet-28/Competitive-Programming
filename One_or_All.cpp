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
        int n, m, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        arraysort(a);
        if(a[0]==a[n-1]){
            if(a[0]%2==1){
                cout << "CHEF" << endl;
            }
            else{
                cout << "CHEFINA" << endl;
            }
        }   
        else{
            int s=accumulate(a,a+n,0);
            int s1 = s;
            s1-=a[0]*n;
            s1+=a[0];
            if(s%2==0 and s1%2==0){
                cout << "CHEFINA" << endl;
            }
            else{
                cout << "CHEF" << endl;
            }
        }
    }
}