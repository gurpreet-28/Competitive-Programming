	   					 		  	   				  			
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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    { 
    int n,p=0,k,r;
    cin >> r >> k;
    n=r*k;
    int a[n];
    inputarray(a,n);
    int sum=0;
    f(j,1,k+1){
        sum+=a[n-((r/2)+1)*j];
    }
    cout << sum << endl;
    }
}
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
// 1 2 13 14 15
// 3 4 10 11 12
// 5 6 7  8  9
