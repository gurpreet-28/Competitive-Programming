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
        int i=1;
        for(;i<=4;i++){
            if((n-i)%4==0){
                break;
            }
        } 
        p=(n-i)/4;
        int b[4];
        b[0]=1;
        b[1]=(n+3)/2;
        b[2]=b[1]-1;
        b[3]=n;
        if(i==1 || i==2){
            cout << b[i-1]+p << endl;
        }
        else{
            cout << b[i-1]-p << endl;
        }
    }
}