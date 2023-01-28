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
        int n,p=0,q,m,ch,ca,mh,ma;
        cin >> ch >> ca;
        cin >> mh >> ma;
        cin >> n >> p >> q;
        int r=0;
        f(i,0,n+1){
            int temp_ca=ca+(p*i);
            int temp_ch=ch+(q*(n-i));
            if((temp_ch+ma-1)/ma>=(mh+temp_ca-1)/temp_ca){
                r=1;
                break;
            }
        }
        if(r==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    
    }
}