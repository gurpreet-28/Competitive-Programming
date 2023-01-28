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
    int n, p=2, q=0, r=0, x, y, e=0, o=0, sum=0;
    cin >> n;
    int a[n];
    string s;
    cin >> s;
    inputarray(a,n);
    f(i,0,n-1){
        if(a[i]>=a[i+1] && s[i]=='0' && s[i+1]=='1'){
            s[i]='1';
            s[i+1]='0';
            continue;
        }
        if(a[i]<a[i+1] && s[i]=='0' && s[i+1]=='1'){
            int x=a[i],p=i;
            while(s[i+1]=='1'){
                if(i==n-1){
                    break;
                }
                if(a[i+1]<=x){
                    s[p]='1';
                    s[i+1]='0';
                    break;
                }
                i++;
            }
        }
    }
    f(i,0,n){
        sum+=((s[i]-'0')*a[i]);
    }
    cout << sum << endl;
    }
}
