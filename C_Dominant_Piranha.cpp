	   					 		  	   				  			
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
    int n,p=-1;
    cin >> n;
    int a[n];
    inputarray(a,n);
    int maxi=*max_element(a,a+n);
    f(i,1,n-1){
        if(a[i]==maxi && (a[i-1]!=maxi || a[i+1]!=maxi)){
            p=i;
            break;
        }
    }
    if(p==-1){
        if(a[0]==maxi && a[1]!=maxi){
            p=0;
        }
        else{
            p=n-1;
        }
    }
    arraysort(a);
    if(a[0]==a[n-1]){
        cout << -1 << endl;
    }
    else{
        cout << p+1 << endl;
    }
    }
}
