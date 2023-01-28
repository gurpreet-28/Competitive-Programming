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
#define MAX 1000000000

// set<int> primeFactors(int n)
// {
//     set<int>v;
//     while (n % 2 == 0)
//     {
//         v.insert(2);
//         n = n/2;
//     }
 
//     for (int i = 3; i <= sqrt(n); i = i + 2)
//     {
//         // While i divides n, print i and divide n
//         while (n % i == 0)
//         {
//             v.insert(i);
//             n = n/i;
//         }
//     }
 
//     if (n > 2)
//         v.insert(n);
//     return v;
// }

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){     
    int n, p=0, q=0, r, j, x=0, y=0;
    cin >> n;
    int a[n],b[n];
    inputarray(a,n);
    inputarray(b,n);
    x=accumulate(a,a+n,0);
    y=accumulate(b,b+n,0);
    if(x==y){
        f(i,0,n){
            if(a[i]!=b[i]){
                q=1;
                break;
            }
        }
        if(q==1){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    else{
        int ans=0;
        if(x>y){
            f(i,0,n){
                if(a[i]==1 && b[i]==0){
                    a[i]=0;
                    x--;
                    ans++;
                    if(x==y){
                        break;
                    }
                }
            }
            q=0;
            f(i,0,n){
                if(a[i]!=b[i]){
                    q=1;
                    break;
                }
            }
            cout << ans+q << endl;
        }
        else{
            f(i,0,n){
                if(a[i]==0 && b[i]==1){
                    a[i]=1;
                    x++;
                    ans++;
                    if(x==y){
                        break;
                    }
                }
            }
            q=0;
            f(i,0,n){
                if(a[i]!=b[i]){
                    q=1;
                    break;
                }
            }
            cout << ans+q << endl;
        }    
    }
    }
}
