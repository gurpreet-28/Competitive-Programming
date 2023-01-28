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
    int n, p, k, m=0, q, a, b, r, x, y;
    cin >> n >> a >> b;
    x=0,y=0;
    string s;
    cin >> s;
    f(i,0,n){
        if(s[i]=='1'){
            x++;
        }
    }
    y=n-x;
    if(a+b>0){
        cout << (a+b)*n << endl;
    }
    else{
        int ans=0;
        if(a<0 && b<0){
            if(x>y){
                q=1;
                f(i,0,n-1){
                    if(s[i]==1 && s[i+1]==1){
                        q++;
                    }
                    else{
                        ans+=((q*a)+b);
                        q=1;
                    }
                }
                ans+=((y*a)+b);
            }
            else{
                q=1;
                f(i,0,n-1){
                    if(s[i]==0 && s[i+1]==0){
                        q++;
                    }
                    else{
                        ans+=((q*a)+b);
                        q=1;
                    }
                }
                ans+=((x*a)+b);
            }
            cout << max((a+b)*n,ans) << endl;
            continue;
        }
        vector<int>v;
        int c=1;
        f(i,0,n-1){
            if(s[i]==s[i+1]){
                c++;
            }
            else{
                v.pb(c);
                c=1;
            }
        }
        if(c>1){
            v.pb(c);
        }
        if(n>=2){
            if(s[n-1]!=s[n-2]){
                v.pb(1);
            }
        }
        else{
            v.pb(1);
        }
        int sum=0;
        f(i,0,v.size()){
            sum+=((v[i]*a)+b);
        }
        cout << sum << endl;
    }
    }
}
