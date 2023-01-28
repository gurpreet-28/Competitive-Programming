#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

int checkzero(int n){
    while(n!=0){
        if(n%10==0){
            return 1;
        }
        else{
            n=n/10;
        }
    }
    return 0;
}

int mindigit(int num){
    int mini=num%10;
    while(num!=0){
        mini=min(mini,num%10);
        num/=10;
    }
    return mini;
}


int maxdigit(int n){
    int maxi=n%10;
    while(n!=0){
        maxi=max(maxi,n%10);
        n/=10;
    }
    return maxi;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,k,p,q,r;
    cin >> n >> k;
    // q=n;
    // cout << maxdigit(n) << " " << mindigit(n) << endl;;
    k--;
    while(k--){
        if(checkzero(n)){
            p=n;
            break;
        }
        p=maxdigit(n);
        q=mindigit(n);
        n=n+(p*q);
    } 
    cout << n << endl;
  }
}