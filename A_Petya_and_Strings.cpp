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
    int n1,n2, p=0, q, r, x=0, y;
    string s1,s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if(s1==s2){
        cout << 0 << endl;
    }
    else{
        n1=s1.length();
        n2=s2.length();
        f(i,0,min(n1,n2)){
            if(s1[i]==s2[i]){
                continue;
            }
            if(s1[i]<s2[i]){
                p=1;
                break;
            }
            else{
                x=1;
                break;
            }
        }
        if(p==1){
            cout << -1 << endl;
        }
        else{
        if(x==1){
            cout << 1 << endl;
        }
        else{
            if(n1<n2){
                cout << -1 << endl;
            }
            else{
                cout << 1 << endl;
            }
        }
        }
    }   
  }
}
