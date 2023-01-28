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
    int n ,k;
    cin >> n >> k;
    int a[n];
    inputarray(a,n);
    arraysort(a);
    vector<int>v;
    int i=1, j=0;
    while(j<n){
        if(a[j]!=i){
            v.pb(i);
            i++;
        }
        else{
            j++;
            i++;
        }
    }
    vector<int>v1;
    int s=0;
    s=accumulate(v.begin(),v.end(),0);
    if(s>k){
        cout << "NO" << endl;
    }
    else{
        k-=s;
        j=a[n-1];
        while(k>0){
            j++;
            k-=j;
        }
        if(k==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

  }
}
