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

vector<int>prime;
vector<bool>spf;

void seive() {
    spf.resize(sqrt(1e9), false);
    spf[0] = true, spf[1] = true;
    for (int i = 2; i * i <= 1e9; i++) {
        if (spf[i])    
            continue;
        for (int j = i * i; j <= sqrt(1e9); j += i)
            spf[j] = true;
    }
    for (int i = 2; i < sqrt(1e9); i++)
        if (!spf[i])
            prime.push_back(i);
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // sieve();
    seive();
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, p = 0;
        cin >> n;
        int a[n];
        inputarray(a,n);
        for(auto j: prime){
            p=0;
            f(i,0,n){
                if(a[i]%j==0){
                    p++;
                    while(a[i]%j==0){
                        a[i]/=j;
                    }
                }
                if(p>1){
                    break;
                }
            }
            if(p>1){
                break;
            }
        }
        // printarray(a,n);
        // cout << prime.size() << endl;
        if(p>1){
            cout << "YES" << endl;
        }
        else{
            sort(a,a+n);
            f(i,0,n-1){
                if(a[i]==a[i+1] && a[i]!=1){
                    p=2;
                    break;
                }
            }
            if(p>1){
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}
