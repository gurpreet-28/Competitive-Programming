#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--){
    int n,p,q,r=0,c=0;
    cin >> n;
    if(n%2==1){
        p=sqrtl(n);
        for(int i=0;i<=p;i++){
            q=(n-(i*i));
            q=sqrtl(q);
            if(((1LL*q*q)+(i*i))==n){
                cout << fixed << setprecision(0) << i << " " << q << endl;
                c=1;
                break;
            }
        }
        if(c==0){
            cout << -1 << endl;
        }
    }
    else{
        if(n==10){
            cout << 1 << " " << 3 << endl;
            continue;
        }
        int num=n;
        while(num%2==0){
            num/=2;
            r++;
        }
        if(r%2==1){
            num=n/pow(2,r-1);
            r--;
        }
        // cout << num << endl;
        // cout << r << endl;
        p=sqrtl(num);
        for(int i=0;i<=p;i++){
            q=(num-(i*i));
            q=sqrtl(q);
            if(((1LL*q*q)+(1LL*i*i))==num){                
                cout << fixed << setprecision(0) <<  i*pow(2,r/2) << " " << q*pow(2,r/2) << endl;
                c=1;
                break;
            }
        }
        if(c==0){
            cout << -1 << endl;
        }
    }
    }
}