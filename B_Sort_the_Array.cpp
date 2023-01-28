#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
    int n,p=0,q=0,r=0,x=0,y;
    cin >> n;
    q=n-1;
    vector<int>a(n);
    inputarray(a,n);
    if(is_sorted(a.begin(),a.end())){
        cout << "yes" << endl;
        cout << "1 1" << endl;
        continue;
    }

    for(int i=0;i<n-1;i++){
        if((a[i]>a[i+1])&&x==0){
            p=i;
            x=1;
            continue;
        }
        if(a[i]<=a[i+1]&&x==1){
            q=i;
            break;
        }
    }
    // cout << p << " "  << q <<  endl; 
    reverse(a.begin()+p,a.begin()+q+1);
    if(is_sorted(a.begin(),a.end())){
        cout << "yes" << endl;
        cout << p+1 << " " << q+1 << endl;
        continue;
    }
    cout << "no" << endl;
  }
}