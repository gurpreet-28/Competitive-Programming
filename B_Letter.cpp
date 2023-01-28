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
  int t = 1;
//   cin >> t;
    while (t--)
    {
    int n,p=0;
    string s, w;
    getline(cin,s);
    getline(cin,w);
    unordered_map<char,int>f1;
    unordered_map<char,int>f2;
    f(i,0,s.length()){
        if(s[i]==' '){
            continue;
        }
        f1[s[i]]++;
    }
    f(i,0,w.length()){
        if(w[i]==' '){
            continue;
        }
        f2[w[i]]++;
    }
    f(i,0,w.length()){
        if(w[i]==' '){
            continue;
        }
        if(f1[w[i]]<f2[w[i]]){
            p=1;
            break;
        }
    }
    if(p==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
}
