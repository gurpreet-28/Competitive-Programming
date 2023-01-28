#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define printarray(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}printf("\n");
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
    int n;
    cin >> n;
    int a[n]={0};
    for(int i=0;i<n;i++){
        if(isPrime(i+2)){
            a[i]=1;
        }
        else{
            a[i]=2;
        }
    }
    if(n==1){
        cout << 1 << endl;
        cout << 1 << endl;
        continue;
    }
    if(n==2){
        cout << 1 << endl;
        cout << 1 << " " << 1 << endl;
        continue;
    }
    cout << 2 << endl;
    f(i,0,n){
        cout << a[i] << " ";
    }cout << endl;

    
  }
}