	   					 		  	   				  			
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

bool isprime(int n){
    if(n==2){
        return true;
    }
    f(i,2,sqrt(n)+1){
        if(n%i==0){
            return false;
        }
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
    int n,k,b=0,c;
    cin >> n;
    int a[n][n];
    b=n;
    if(isprime(b)){
        b=1;
    }
    f(i,0,n){
        f(j,0,n){
            if(i==j || i==n-1-j){
                a[i][j]=1;
                continue;
            }
            a[i][j]=0;
            }
    }
    if(n>2 && n%2==1){
        a[(n/2)][(n/2)-1]=9;
        a[(n/2)][(n/2)+1]=9;
        a[(n/2)-1][(n/2)]=9;
        a[(n/2)+1][(n/2)]=9;
    }
    f(i,0,n){
        f(j,0,n){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    }
}
