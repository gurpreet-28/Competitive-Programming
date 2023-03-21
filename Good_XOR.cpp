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
        int n, m, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        int ones=0,zeros=0;
        f(i,0,n){
            if(a[i]==1){
                ones++;
            }
            else{
                zeros++;
            }
        }
        if(n==2 && ones==2){
            cout << -1 << endl;
            continue;
        }
        if(ones==0 || (n%2==1)){
            cout << -1 << endl;
            continue;
        }
        if(ones==zeros){
            cout << 0 << endl;
        }
        else{
            if(ones<zeros){
                q=zeros-ones;
                q/=2;
                cout << q << endl;
            }
            else{
                q=0;
                while(ones>zeros){
                    ones-=2;
                    zeros+=2;
                    q++;
                }
                if(ones==zeros){
                    cout << q << endl;
                }
                else{
                    cout << q+1 << endl;
                }
            }
        }
    }
}