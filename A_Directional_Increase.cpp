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
        int a[n];
        inputarray(a,n);
        if(n==1 and a[0]==0){
            cout << "Yes" << endl;
            continue;
        }
        if(a[0]<0 || a[n-1]>0){
            cout << "No" << endl;
            continue;
        }
        else{
            f(i,1,n){
                a[i]=a[i]+a[i-1];
            }
            p=-1;
            q=-1;
            f(i,0,n){
                if(a[i]<0){
                    q=1;
                    break;
                }
                if(a[i]==0 and p==-1){
                    p=i;
                }
            }
            if(q!=1)
                f(i,p,n){
                    if(a[i]!=0){
                        q=1;
                    }
                }
            if(q==1){
                cout << "No" << endl;
            }
            else{
                cout << "Yes" << endl;
            }
        }
    }
}