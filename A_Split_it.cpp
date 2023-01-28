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
    int n, p=0, k=0, r, x, y;
    cin >> n >> k;
    string s;
    cin >> s;
    int i=0,j=n-1;
    if(k==0){
        cout << "YES" << endl;
        continue;
    }
    while(i<j){
        if(s[i]==s[j]){
            p++;
        }
        else{
            break;
        }
        if(p==k){
            break;
        }
        i++;
        j--;
    }
    if(p==k){
        if(n%2==0)
            if(j-i>1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        else{
            cout << "YES" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
    }
}
