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

int digits(int n){
    int p=0;
    while (n!=0){
        p++;
        n/=10;
    }
    return p;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    int n,p=0,ans=0,q,r,x,y;
    cin >> n;
    int a[n],b[n];
    inputarray(a,n);
    inputarray(b,n);
    arraysort(a);
    arraysort(b);
    f(i,0,n){
        if(a[i]!=b[i]){
            p=1;
            break;
        }
    }
    if(p==0){
        cout << 0 << endl; 
    }
    else{
        unordered_map<int,int>f;
        f(i,0,n){
            f[a[i]]++;
        }
        f(i,0,n){
            if(f[b[i]]>0){
                f[b[i]]--;
                continue;
            }
            else{
                b[i]=digits(b[i]);
                ans++;
            }
        }
        f(i,0,n){
            if(f[a[i]]>0){
                f[b[i]]--;
                continue;
            }
            else{
                b[i]=digits(b[i]);
                ans++;
            }
        }
        cout << ans << endl;
        arraysort(a);
        arraysort(b);
        f(i,0,n){
            if(a[i]==1 && b[i]>1){
                ans++;
                continue;
            }
            if(a[i]>1 && b[i]==1){
                ans++;
                continue;
            }
            if(a[i]!=b[i]){
                ans+=2;
            }
        }
        // printarray(a,n);
        // printarray(b,n);
        // cout << ans << endl;
    }
    }
}
