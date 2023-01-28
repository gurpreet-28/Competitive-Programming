#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n,p=0,q=0,y,x;
        cin >> n >> y;
        int a[n];
        inputarray(a,n);
        f(i,0,n){
            p=(p|a[i]);
        }
        int t1=p,t2=y;
        while(t1>0 || t2>0){
            if((t1%2)==1 && (t2%2)==0){
                q=1;
                break;
            }
            t1/=2;
            t2/=2;
        }

        if(q==1){
            cout << -1 << endl;
        }
        else{
            cout << (p^y) << endl;
        }
    }
}