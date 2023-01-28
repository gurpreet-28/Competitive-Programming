#include <bits/stdc++.h>
#define int             long long
#define f(i,a,b)        for(int i=a;i<b;i++)
#define pb              push_back
#define all(a)          a.begin(),a.end()
#define arraysort(a)    sort(a,a+n)
#define endl            "\n"
#define inputarray(a,n) f(i,0,n){cin >> a[i];}
#define printarray(a,n) f(i,0,n){cout << a[i] << " ";}cout << endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    while (t--){
    int n,p=0;
    int a[4][4];
    vector<string>c;
    f(i,0,4){
        string s;
        cin >> s;
        f(j,0,4){
            if(s[j]=='#'){
                a[i][j]=1;
            }
            else{
                a[i][j]=0;
            }
        }
    }
    // f(i,0,4){
    //     f(j,0,4){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    f(i,0,3){
        f(j,0,3){
            int sum=0;
            sum=a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
            if(sum==2){
                continue;
            }
            else{
                cout << i << " " <<  j << endl;
                p=1;
                break;
            }
        }
        if(p=1){
            break;
        }
    }
    if(p==1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
}