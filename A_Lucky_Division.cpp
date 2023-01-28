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

bool luckynum(int n){
    while(n!=0){
        if((n%10!=4)&&(n%10!=7)){
            return false;
        }
        n=n/10;
    }
    return true;
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
//   cin >> t;
  while (t--){
    int n, p=0, q=0, r, x, y;
    cin >> n;
    int a[]={4,7,47,74,444,447,474,477,744,747,774,777};
    if(luckynum(n)){
        cout << "YES" << endl;
    }
    else{
        // if(n%4==0&&n%7==0){
        //         cout << "YES" << endl;
        //         continue;
        // }
        // if(n%4==0){
        //     cout << "YES" << endl;
        //     continue;
        // }
        // if(n%7==0){
        //     cout << "YES" << endl;
        //     continue;
        // }
        f(i,0,12){
            if(n%a[i]==0){
                p=1;
                break;
            }
        } 
        if(p==1){
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
  }
}
