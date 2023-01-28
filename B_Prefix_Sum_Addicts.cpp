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
    cin >> n >> k;   
    int a[k],ans[n]={0};
    inputarray(a,k);
    int i=n-1;
    for(int j=k-1;j>0;j--){
        ans[i--]=a[j]-a[j-1];
    }
    if(k==1){
        if(a[0]>0){
            ans[n-1]=a[0];
        }
        else{
            ans[0]=a[0];
        }
    }
    else{
        int x=ans[i+1];
        p=i;
        while(i>=0){
            ans[i--]=x;
        }
        ans[0]=a[0]-p*x;
    }
    // printarray(ans,n);
    if(is_sorted(ans,ans+n)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
  }
}