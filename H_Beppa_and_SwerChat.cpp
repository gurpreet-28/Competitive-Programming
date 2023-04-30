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
        int ans=0;
        int i=n-1,j=n-1;
        map<int,int>mp;
        while(i>=0 and j>=0){
            if(a[i]!=b[j]){
                i--;
            }
            else{
                ans++;
                i--;
                j--;
            }
        }
        cout << n-ans << endl;
    }
}
