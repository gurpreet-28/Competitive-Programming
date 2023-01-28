// https://codeforces.com/problemset/problem/270/A

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
    int n,p=0,k,i, q=0, x, y,d,ps=0,ng=0;
    cin >> n >> k;
    p=n-(k-1);
    int a[k];
    if(p%2==1){
        cout << "YES" << endl;
        f(i,0,k-1){
            a[i]=1;
        }
        a[k-1]=p;
        printarray(a,k);
        continue;
    }
    p=n-((k-1)*2);
    if(p>0 && p%2==0){
        cout << "YES" << endl;
        f(i,0,k-1){
            a[i]=2;
        }
        a[k-1]=p;
        printarray(a,k);
        continue;
    }
    else{
        cout << "NO" << endl;
    }
    }
}