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
vector<int> printDivisors(int n){
  vector<int>v;
  for (int i=1; i<=sqrt(n); i++){
  if (n%i == 0){
    if (n/i == i)
      v.pb(i);
    else{
      v.pb(i);
      v.pb(n/i);
      }
    }
  }
  sort(all(v));
  return v;
}


signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--){
    int n,m,a,b,c,d,x,y,f,p=0,g;
    cin >> a >> b >> c >> d;
    vector<int>a1,b1,c1,d1;
    a1=printDivisors(a);
    b1=printDivisors(b);
    set<int>s;
    f(i,0,a1.size()){
        f(j,0,b1.size()){
          s.insert(a1[i]*b1[j]);
        }
    }
    for(auto i : s){
      c1.pb(i);
    }
    m=a*b;
    int size=c1.size();
    int i=0,j=size-1;
    while(i<size){
      x=c1[i];
      y=m/x;
      f=(c/x)*x;
      g=(d/y)*y;
        if((f<=c && f>a) && (g<=d && g>b)){
          x=f;
          y=g;
          p=1;
          break;
        }
        else{
          i++;
        }  
    }
    if(p==0){
      cout << -1 << " " << -1 << endl;
    }
    else{
      cout << x << " " << y << endl;
    }
    }
}