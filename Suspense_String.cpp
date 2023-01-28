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
    int n, p=0, q, r, x, y;
    cin >> n;
    // int a[n],b[n];
    // inputarray(a,n);
    string s,ans="";
    cin >> s;
    int i=0,j=n-1;
    while(i<=j){
        if(s[i]=='1' && p==0){
            ans=ans+s[i];
            p=1;
            i++;
            continue;
        }
        if(s[i]=='0' && p==0){
            ans=s[i]+ans;
            p=1;
            i++;
            continue;
        }
        if(s[j]=='1' && p==1){
            ans=s[j]+ans;
            p=0;
            j--;
            continue;
        }
        if(s[j]=='0' && p==1){
            ans=ans+s[j];
            p=0;
            j--;
            continue;
        }
    }
    cout << ans << endl;
  }
}