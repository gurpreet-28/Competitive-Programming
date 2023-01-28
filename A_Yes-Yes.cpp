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
    int n, p=0, q, r, j, x, y;
    // cin >> n;
    string s;
    cin >> s;
    n=s.length();    
    vector<string>v={"ss", "se", "sey", "ee", "YY", "eY", "Ys"};
    unordered_map<char,int>f;
    f(i,0,n){
        f[s[i]]++;
    }
    for(char i = 'a' ;i<='z';i++){
        if(i=='e' || i=='s'){
            continue;
        }
        if(f[i]>0){
            p=1;
            break;
        }
    }
    for(char i = 'A' ;i<='Z';i++){
        if(i=='Y'){
            continue;
        }
        if(f[i]>0){
            p=1;
            break;
        }
    }
    if(p==1){
        cout << "NO" << endl;
    }
    else{
        int q=0;
        r=v.size();
        f(i,0,r){
            string w=v[i];
            size_t found = s.find(w);
            if (found != string::npos){
                q=1;
                break;
            }
        }
        if(q==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

    }
  }
}
