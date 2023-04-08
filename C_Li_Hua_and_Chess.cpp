#include <bits/stdc++.h>
// #define int               long long
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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q;
        cin >> n >> m;
        p=(n+1)/2;
        q=(m+1)/2;
        int temp;
        // cout << "? " << p << " " << q << endl;
        // cin >> temp;
        // while(1){
        //     int t;
        //     if(temp==0){
        //         cout << "! " << p << " " << q << endl; 
        //         break;
        //     }
        //     if(p-temp>0){
        //         cout << "? " << p-temp << " " << q << endl;
        //         cin >> t;
        //         if(t<temp){
        //             p=p-temp;
        //             temp=t;
        //             continue;
        //         }
        //     }
        //     if(q-temp>0){
        //         cout << "? " << p << " " << q-temp << endl;
        //         cin >> t;
        //         if(t<temp){
        //             q=q-temp;
        //             temp=t;
        //             continue;
        //         }
        //     }
        //     if(p+temp<=n){
        //         cout << "? " << p+temp << " " << q << endl;
        //         cin >> t;
        //         if(t<temp){
        //             p=p+temp;
        //             temp=t;
        //             continue;
        //         }
        //     }
        //     if(q+temp<=m){
        //         cout << "? " << p << " " << q+temp << endl;
        //         cin >> t;
        //         if(t<temp){
        //             q=q+temp;
        //             temp=t;
        //             continue;
        //         }
        //     }

        //     if(p-temp>0 and q-temp>0){
        //         cout << "? " << p-temp << " " << q-temp << endl;
        //         cin >> t;
        //         if(t<temp){
        //             p=p-temp;
        //             q=q-temp;
        //             temp=t;
        //             continue;
        //         }
        //     }
        //     if(q-temp>0 and p+temp<=n){
        //         cout << "? " << p+temp << " " << q-temp << endl;
        //         cin >> t;
        //         if(t<temp){
        //             q=q-temp;
        //             p=p+temp;
        //             temp=t;
        //             continue;
        //         }
        //     }
        //     if(p+temp<=n and q+temp<=m){
        //         cout << "? " << p+temp << " " << q+temp << endl;
        //         cin >> t;
        //         if(t<temp){
        //             p=p+temp;
        //             q=q+temp;
        //             temp=t;
        //             continue;
        //         }
        //     }
        //     if(q+temp<=m and p-temp>0){
        //         cout << "? " << p-temp << " " << q+temp << endl;
        //         cin >> t;
        //         if(t<temp){
        //             p=p-temp;
        //             q=q+temp;
        //             temp=t;
        //             continue;
        //         }
        //     }
        // }
        int t;
        p=1,q=1;
        cout << "? " << 1 << " " << 1 << endl;
        cin >> temp;
        if(temp==0){
            cout << "! " << 1 << " " << 1 << endl; 
            continue;
        }
        p=1+temp;
        q=1+temp;
        if(p>n){
            p=n;
        }
        if(q>m){
            q=m;
        }
        cout << "? " << p << " " << q << endl;
        cin >> temp;
        if(temp==0){
            cout << "! " << p << " " << q << endl; 
            continue;
        }

        cout << "? " << p << " " << q-temp << endl;
        cin >> t;
        if(t==0){
            cout << "! " << p << " " << q-temp << endl; 
            continue;
        }
        else{
            cout << "! " << p-temp << " " << q << endl; 
            continue;
        }
    }
}