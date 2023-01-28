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

bool isdivi(int n){
    int p=n;
    while(p!=0){
        int x=p%10;
        if(x==0){
            p/=10;
            continue;
        }
        if(n%x!=0){
            return false;
        }
        p/=10;
    }
    return true;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, p = 0, ans=0;
        cin >> n;
        while(!isdivi(n)){
            n++;
        }
        cout << n << endl;
    }
}
