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
        int n, m, p=0, q;
        cin >> n;
        vector<int>a(n);
        vector<int>b(n);
        inputarray(a,n);
        inputarray(b,n);
        int m1 = *max_element(all(a));
        int m2 = *max_element(all(b));
        if(a[n-1]==m1 && b[n-1]==m2){
            p=1;
        }
        f(i,0,n-1){
            if(a[i]>a[n-1] || b[i]>b[n-1]){
                swap(a[i],b[i]);
            }
        }
        m1 = *max_element(all(a));
        m2 = *max_element(all(b));
        if(a[n-1]==m1 && b[n-1]==m2){
            p=1;
        }

        // printarray(a,n);
        // printarray(b,n);

        if(p==1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}