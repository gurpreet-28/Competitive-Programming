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

bool powerof2(int n){
    float i = log2(n);
    if (ceil(i) == floor(i)) {
        return 1;
    }
    return 0;
}
signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
  cin >> t;
  while (t--){
    int n,k,p=0;
    cin >> n;   
    int a[n];
    inputarray(a,n);
    arraysort(a);
    reverse(a,a+n);
    int sum1=0,sum2=0;
    f(i,0,n){
        if(a[i]>0)
            sum1+=a[i];
        else
            sum2+=a[i];
    }
    cout << abs(abs(sum1)-abs(sum2)) << endl;
    }
}