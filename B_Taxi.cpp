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
  int t=1;
//   cin >> t;
  while (t--){
    int n, l=0,p=0, q, x, y;
    cin >> n;
    int a[n];
    inputarray(a,n);
    int f[5]={};
    f(i,0,n){
        f[a[i]]++;
    }
    p+=f[4];
    f[4]=0;
    p+=f[3];
    f[1]=max(l,(f[1]-f[3]));
    f[3]=0;
    p+=f[2]/2;
    l=f[2]%2;
    if(f[1]==0&&l==1){
        p++;
    }
    if(f[1]>0&&l==1){
        p++;
        l=0;
        f[1]=max(l,(f[1]-2));
    }
    if(f[1]>0){
        if(f[1]%4==0){
            p+=f[1]/4;
        }
        else{
            p+=f[1]/4;
            p++;
        }
    }
    cout << p << endl;

}
}
