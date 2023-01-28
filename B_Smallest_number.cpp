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

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t = 1;
  //   cin >> t;
  while (t--)
  {
    int n;
    vector<int>v;
    f(i,0,4){
        int x;
        cin >> x;
        v.pb(x);
    }
    string s;
    f(i,0,3){
        char c;
        cin >> c;
        s.push_back(c);
    }
    sort(all(v));
    int ans=INT_MAX;    
    do{
        do{
            n=0;
            int p,q;
            if(s[0]=='+'){
                n=(v[0]+v[1]);
            }
            else{
                n=(v[0]*v[1]);
            }
            if(s[1]=='+'){
                p=n+v[2];
            }
            else{
                p=n*v[2];
            }
            if(s[2]=='+'){
                q=p+v[3];
            }
            else{
                q=p*v[3];
            }
            ans=min(q,ans);
        }while(next_permutation(all(s)));
    }while(next_permutation(all(v)));
    cout << ans << endl;
    }
}
