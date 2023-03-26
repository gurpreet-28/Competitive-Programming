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
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, k, m, p=0, q;
        cin >> n >> k;
        int a[n]={0};
        p=n*(n+1)/2;
        p-=k;
        int currSum =0;
        q=0;
        int bp=0,t=-1;
        while(((q+2)*(q+1))/2<=k){
            q++;
        }
        p=q*(q+1)/2;
        for(int i=0;i<n;i++){
            if(i<q){
                a[i]=20;
            }
            else if (i==q){
                a[i]=-20*q-10+20*(k-p);
            }
            else{
                a[i]=-100;
            }
        }    
        printarray(a,n);   
    }
}