	   					 		  	   				  			
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
    int n;
    cin >> n;
    int a[n],b[n];
    inputarray(a,n);
    f(i,0,n){
        b[i]=a[i];
    }
    if(accumulate(a,a+n,0)==0){
        cout << "NO" << endl;
    }
    else{
        arraysort(a);
        int p=1,q=0;
        f(i,0,n){
            if(a[i]!=b[i]){
                p=0;
                break;
            }
        }
        if(p==1 || a[0]==0){
            reverse(a,a+n);
        }
        int c=0;
        f(i,0,n){
            c+=a[i];
            if(c==0){
                q=1;
                break;
            }
        }
        if(q==1){
            reverse(a,a+n);
            q=0;
            f(i,0,n){
                c+=a[i];
                if(c==0){
                    q=1;
                    break;
                }
            }
            if(q==1){
                cout << "NO" << endl;
                continue;
            }
        }
        cout << "YES" << endl;
        printarray(a,n);
    }
    }
}