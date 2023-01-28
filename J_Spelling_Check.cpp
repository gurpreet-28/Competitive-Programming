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
    int n,m, p=0, q, r, j, x, y;
    string s , w;
    cin >> s >> w;
    n=s.length();
    m=w.length();
    map<char,int>f1,f2;
    f(i,0,n){
        f1[s[i]]++;
    }
    f(i,0,m){
        f2[w[i]]++;
    }
    f(i,0,m){
        if(f1[w[i]]>=f2[w[i]]){continue;}
        else{p=1;break;}
    }
    if(p==1){
        cout << 0 << endl;
    }
    else{
        char c;
        f(i,0,n){
            if(f1[s[i]]-f2[s[i]]>0){
                c=s[i];
                break;
            }
        }
        vector<int>v;
        int i=0,j=0;
        while(i<n && j<m){
            if(s[i]==w[j]){
                i++;
                j++;
            }
            else{
                p=i;
                break;
            }
        }
        f(j,i,n){
            if(s[j]==c){
                v.pb(j+1);
            }
            else{
                break;
            }
        }
        for(int j=i-1;j>=0;j--){
            if(s[j]==c){
                v.pb(j+1);
            }
            else{
                break;
            }
        }
        // cout << c << endl;
        sort(all(v));
        cout << v.size() << endl;
        printarray(v,v.size());
    }
  }
}
