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
    int n, p=0,cost=0, q, r, j, x, y;
    cin >> n;
    int a[n],b[n];
    string s,w="";
    cin >> s;
    f(i,0,n){
        for(int j=i;j<n;j+=(i+1)){
            if(s[j]=='-'){
                continue;
            }
            if(s[j]=='0'){
                cost+=(i+1);
                s[j]='-';
            }
            else{
                break;
            }
        }
    }
    cout << cost << endl;
  }
}
