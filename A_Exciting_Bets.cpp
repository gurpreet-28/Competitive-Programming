	   					 		  	   				  			
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
    int n,k,a,b=0,c;
    cin >> n >> k;
    b=abs(k-n);
    if(b==0){
        cout << 0 << " " << 0 << endl;  
    }
    else if(b==1){
        cout << b << " " << 0 << endl;
    }
    else{
        cout << b << " " << min(n%b,b-n%b) << endl;
    }
    }
}
