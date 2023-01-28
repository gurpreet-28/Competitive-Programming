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

int lcm(int a, int b){
    return ((a*b)/__gcd(a,b));
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
//   cin >> t;
  while (t--){
    int n, p, k, m=0, q, x, y;
    // cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    n=s1.length();
    unordered_map<char,int>f;
    int ans=n;
    int i=0,j=0;
    while(i<n && j<=n){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
        else{
            ans=j+1;
            break;
        }
    }
    cout << ans << endl;
    }
}
