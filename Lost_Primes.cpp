#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define printarray(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}printf("\n");
using namespace std;

int digits(int n){
    int c=0;
    while(n!=0){
        c++;
        n/=10;
    }
    return c;
}
bool isPrime(int n){
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }   
    return true;
}
signed main (){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,x,y,p=0;
    string s;
    cin >> s;
    n=s.length();
    x=pow(10,(n-1));
    for(int i=x;i<pow(10,n);i++){
        p=0;
        if(isPrime(i)){
            y=i;
            for(int j=n-1;j>=0;j--){
                if(s[j]=='?'){
                    y=y/10;
                    continue;
                }
                if(y%10!=s[j]){
                    p=1;
                    break;
                }
                y=y/10;
            }
            if(p==0){
                cout << i << endl;
                break;
            }
        }
    }
  }
}