#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
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
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n;
        int a[n],b[n];
        inputarray(a,n);
        inputarray(b,n);
        int i1=0,i2=0,j1=n-1,j2=n-1;
        q=0;
        int l=0,r=n-1;
        while(i1<=j1 and i2<=j2){
            if(a[i1]==b[i2] and p==0){
                i1++;
                i2++;
            }
            else{
                l=i1;
                p=1;
            }
            if(a[j1]==b[j2] and q==0){
                j1--;
                j2--;
            }
            else{
                r=j1;
                q=1;
            }
            if(p==1 and q==1){
                break;
            }
        }
        int i=max(0LL,l-1);
        while(i>=0 and b[i]<=b[l] ){
            l--;
            i--;
        }
        i=min(n-1,r+1);
        while(i<n and b[i]>=b[r]){
            r++;
            i++;
        }
        cout << max(1LL,l+1) << " " << min(n,r+1) << endl;
        
    }
}