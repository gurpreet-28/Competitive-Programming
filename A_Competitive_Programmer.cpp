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
    int t;
    cin >> t;
    while (t--){
    int n,p=0,q=0,r,x,y,e=0;
    string s;
    cin >> s;
    n=s.length();
    f(i,0,n){
        if(s[i]=='0'){
            p++;
        }
    }
    // if(p==n){
    //     cout << "red" << endl;
    //     continue;
    // }

    if(p>0){
        f(i,0,n){
            if((s[i]-'0')%2==0){
                e++;
            }
        }
        e--;
        if(e>0){
            f(i,0,n){
                q+=(s[i]-'0');
            }
            if(q%3==0){
                cout << "red" << endl;
            }
            else{
                cout << "cyan" << endl; 
            }
        }
        else{
            cout << "cyan" << endl;
        }
    }
    else{
        cout << "cyan" << endl;
    }

    

  }
}