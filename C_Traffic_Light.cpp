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
    int n, p=0, q=0, r=0, x, y, e=0, o=0, sum=0;
    char c;
    cin >> n >> c;
    // int a[n],b[n];
    // inputarray(a,n);
    string s;
    cin >> s;
    // f(i,0,n){
    //     if(s[i]=='r'){
    //         q=i;
    //         break;
    //     }
    // }
    // f(i,0,n){
    //     if(s[i]=='y'){
    //         p=i;
    //         break;
    //     }
    // }
    int ans1=0,m1=0;
    f(i,0,2*n){
        if(s[i%n]=='g'){
            ans1=max(m1,ans1);
            m1=0;
            r=0;
            continue;
        }
        if(s[i%n]=='y' && r==0){
            r=1;
            m1=0;
        }
        if(r==1){
            m1++;
        }
        else{
            continue;
        }
    }
    int ans=0,m=0;
    r=0;
    f(i,0,2*n){
        if(s[i%n]=='g'){
            ans=max(m,ans);
            m=0;
            r=0;
            continue;
        }
        if(s[i%n]=='r' && r==0){
            r=1;
            m=0;

        }
        if(r==1){
            m++;
        }
        else{
            continue;
        }
    }
    if(c=='g'){
        cout << 0 << endl;
        continue;
    }
    if(c=='r'){
        cout << ans << endl;
    }
    else{
        cout << ans1 << endl;
    }    
  }
}
