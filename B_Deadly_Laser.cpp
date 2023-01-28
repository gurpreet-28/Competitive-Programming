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
    int t;
    cin >> t;
    while (t--){
    int n,m,s,y,d;
    cin >> n >> m >> s >> y >> d;
    if((abs(n-s)+abs(m-y)<=d) || (abs(s-1)+abs(y-1)<=d)){
        cout << -1 << endl;
    }
    else{
        int a[n][m],p,q;
        f(i,0,n){
            f(j,0,m){
                if(abs(s-i-1)+abs(y-j-1)==d){
                    a[i][j]=1;
                }
                else{
                a[i][j]=0;
                }
            }
        } 
        vector<int>v1,v2;
        a[s-1][y-1]=2;
        f(j,0,m){
            if(a[0][j]==1){
                p=0;
                q=j;
                v1.pb(p);
                v2.pb(q);
                break;
            }
        }
        if(v1.empty()){
            cout << abs(n-1)+abs(m-1) << endl;

        }
        else{
        f(i,1,n){
            f(j,0,m){
                if(a[i][j]==1){
                    p=i;
                    q=j;
                    v1.pb(p);
                    v2.pb(q);
                    break;
                }
            }
        }
        int z=0; 
        for(int i=1;i<v1.size();i++){
            if(v1[i]==v1[i-1]+1){
                continue;
            }
            else{
                z=1;
                break;
            }
        }
        if(z==1){
            cout << -1 << endl;
        }
        else{
            for(int i=1;i<v2.size();i++){
            if(v2[i]==v2[i-1]-1){
                continue;
            }
            else{
                z=1;
                break;
            }
        }
        if(z==1){
            cout << -1 << endl;
        }
        else{
        cout << abs(n-1)+abs(m-1) << endl;
        }
        }

        f(i,0,n){
            f(j,0,m){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    }


  }
}