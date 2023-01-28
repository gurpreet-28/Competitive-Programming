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
    int n, p=0, a,b,c,q, r, x, y;
    cin >> n;
    string s,w="";
    cin >> s;
    char ch='a'-1;
    int i=0,j=0;
    for(i=n-1;i>=0;i--){
        if(s[i]=='0'){
            p=(s[i-1]-'0')*pow(10,0)+(s[i-2]-'0')*pow(10,1);
            w+=char(ch+p);
            i-=2;
        }
        else{
            w+=char(ch+s[i]-'0');
        }
    }
    reverse(all(w));
    cout << w << endl;
  }
}
