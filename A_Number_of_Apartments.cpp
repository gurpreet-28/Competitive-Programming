#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
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
        int n,p=0,q;
        cin >> n;
        if(n==1 || n==2 || n==4){
            cout << -1 << endl;
            continue;
        }        
        if(n==7){
            cout << 0 << " " << 0 << " " << 1 << endl;
            continue;
        }
        else{
            f(i,0,400){
                if((n-3*i)%5==0){
                    cout << i << " " << (n-3*i)/5 << " ";
                    break;
                }
            }
            cout << 0 << endl;
        }
    }
}