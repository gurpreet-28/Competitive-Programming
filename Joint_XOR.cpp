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
    int n,p,q,r=0,c=0,o=0,z=0;
    cin >> n;
    string s;
    cin >> s;
    int a[n];
    f(i,0,n){
        if(s[i]=='1')
            a[i]=1;
        else
            a[i]=0;
    }
    // printarray(a,n);
    vector<int>v1,v2;
    f(i,0,n){
        if(a[i]==1){
            p=i;
            break;
        }
    }
    if(p==0){
        f(i,0,n-1){
            v1.pb(a[i]);
        }
    }
    else{
        f(i,p,n){
            v1.pb(a[i]);
        }
    }
    f(i,0,n){
        if(a[i]==1){
            o++;
        }
    }
    z=n-o;
    if(o==n || z==n){
        cout << 0 << endl;
    }
    else{
        f(i,0,n){
        if(a[i]==0){
            p=i;
            break;
        }
    }
    if(p==0){
        f(i,0,n-1){
            v2.pb(a[i]);
        }
    }
    else{
        f(i,p,n){
            v2.pb(a[i]);
        }
    }
    // printarray(v1,v1.size());
    // printarray(v2,v2.size());
    int ans=0,n1,n2,m=0;
    n1=v1.size();
    n2=v2.size();
    if(n1==n2){
        f(i,0,v1.size()){
            ans+=((v1[i]^v2[i])*pow(2,v1.size()-1-i));
        }
        cout << ans << endl;
    }
    else if(n1>n2){
        f(i,0,n1-n2+1){
            m=0;
            f(j,0,n2){
                m+=((v1[i+j]^v2[j])*pow(2,n2-1-i));
            }
            ans=max(ans,m);
        }
        cout << ans << endl;
    }
    else{
        f(i,0,n2-n1+1){
            m=0;
            f(j,0,n1){
                m+=((v1[j]^v2[i+j])*pow(2,n1-1-i));
            }
            ans=max(ans,m);
        }
        cout << ans << endl;
    }
    }
   }
}