#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        sort(a,a+n,[](int a,int b){
            if(abs(a)==abs(b)){
                if(a<0){
                    return false;
                }
                return true;
            }
            return abs(a)<abs(b);
        });
        q=0;
        f(i,0,n){
            if(a[i]<0){
                q++;
            }
        }
        int ans1[n],ans2[n];
        p=1;
        f(i,0,n-q-1){
            ans1[i]=p++;
        }
        f(i,n-q-1,n){
            ans1[i]=p--;
        }
        printarray(ans1,n);
        int te=0;
        p=1;
        f(i,0,n){
            if(q==0){
                ans2[i]=p++;
            }
            else{
                if(te==0){
                    ans2[i]=1;
                    te=1;
                }
                else{
                    ans2[i]=0;
                    te=0; 
                    q--;   
                }
            }
        }     
        printarray(ans2,n);

    }
}
