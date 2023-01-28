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
  cin >> t;
  while (t--){
    int n, p=0, q=0, r, j, x, y, o=0,z=0;
    vector<vector<char>>v;
    for(int i=0;i<8;i++){
        string s;
        vector<char>temp;
        cin >> s;
        f(i,0,8)
            temp.pb(s[i]);
        v.pb(temp);
    }   
    int ans=0; 
    for(int i=0;i<8;i++){
        ans=0;
        for(int j=0;j<8;j++){
            if(v[i][j]=='B'){
                ans++;
            }
        }
        if(ans==8){
            p=1;
            break;
        }
    }
    for(int i=0;i<8;i++){
        ans=0;
        for(int j=0;j<8;j++){
            if(v[i][j]=='R'){
                ans++;
            }
        }
        if(ans==8){
            p=0;
            break;
        }
    }
    for(int i=0;i<8;i++){
        ans=0;
        for(int j=0;j<8;j++){
            if(v[j][i]=='R'){
                ans++;
            }
        }
        if(ans==8){
            p=0;
            break;
        }
    }
    for(int i=0;i<8;i++){
        ans=0;
        for(int j=0;j<8;j++){
            if(v[j][i]=='B'){
                ans++;
            }
        }
        if(ans==8){
            p=1;
            break;
        }
    }
    if(p==1){
        cout << "B" << endl;
    }
    else{
        cout << "R" << endl;
    }
}
}