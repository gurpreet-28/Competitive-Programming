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
    int n, p=0, q, r, x, y, i=0, j;
    string s;
    cin >> s;
    n=s.length();
    multiset<char> ans;
    j=n-1;
    int f[10]={0},curr=0;
    vector<pair<int,int>>v1;
    f(i,0,10){
        f[i]=-1;
    }
    f(i,0,n){
        f[s[i]-'0']=i;
    }
    // printarray(f,10);
    f(j,0,10){
        x=f[j];
        if(x<curr)  
            continue;
    
        f(i,curr,f[j]+1){
            if(s[i]=='9'){
                ans.insert('9');
                continue;
            }
            if(s[i]=='0'+j)
                ans.insert(s[i]);
            else
                ans.insert(s[i]+1);
        }
        curr=f[j]+1;
    }
    for(auto i:ans) {
        cout << i;
    }
    cout << endl;
  }
}
