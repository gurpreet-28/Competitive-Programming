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
    int x,k;
    cin >> x >> k;
    int ans=0;
    for (int i=1; i<=sqrt(k); i++)
    {
        if (k%i == 0)
        {
            if (k/i == i){
                if(i<=x){
                    ans++;
                }
            }      
            else{
                if(i<=x && k/i<=x){
                    ans+=2;
                }
            }
        }
    }
    cout << ans << endl;
    }
}
