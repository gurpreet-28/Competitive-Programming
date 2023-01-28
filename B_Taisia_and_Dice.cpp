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
        int n, m, p=0, q,s,r;
        cin >> n >> s >> r;
        int a[n];
        a[0]=s-r;
        f(i,1,n){
            a[i]=1;
            r--;
        }   
        // cout << r << endl
        int mx=a[0]-1;
        f(i,1,n){
            if(r>=mx){
                a[i]+=mx;
                r-=mx;
            }
            else{
                a[i]+=r;
                break;
            }
        } 
        printarray(a,n);
    }
}