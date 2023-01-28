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
    int n,m,p=0,j;
    cin >> n;
    int a[n];
    inputarray(a,n);
    for(int i=0;i<n-1;i++){
        if(a[i]==i+1){
            continue;
        }
        else{
            p=1;
            m=i;
            break;
        }
    }
    f(i,m,n){
        if(a[i]==m+1){
            j=i;
            break;
        }
    }
    if(p==0){
        printarray(a,n);
        continue;
    }
    // cout << m << " " << j << endl;
    // while(m<j){
    //     swap(a[m],a[j]);
    //     m++;
    //     j--;
    // }
    reverse(a+m,a+j+1);
    printarray(a,n);
    }
}