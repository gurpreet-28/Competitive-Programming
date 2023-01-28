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
    int n, p=0,cost=0, q, r, j, x, y;
    cin >> n;
    // int a[n],b[n];
    string s,w="";
    cin >> s;
    unordered_map<char,int>f;
    f(i,0,n){
        f[s[i]]++;
    }
    char ch='A';
    for(char c='a';c<='z';c++){
        if(f[c]==0 && f[ch]==0){
            p=1;
            break;
        }
        ch++;
    }
    if(p==1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

  }
}
