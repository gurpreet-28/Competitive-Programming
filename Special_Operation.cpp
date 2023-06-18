#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a,n)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

int power(int a, int b, int p){
    if(a==0)
        return 0;
    int res=1;
    a%=p;
    while(b>0){
        if(b&1)
        res=(1ll*res*a)%p;
        b>>=1;
        a=(1ll*a*a)%p;
    }
    return res;
}

int lcm(int a, int b){
    if(a==0 || b==0)
        return 0;
    return (a*b)/__gcd(a,b);
}

void solve(){
    int n, m, p=0, q;
    cin >> n >> m;
    int a[n][m];
    f(i,0,n){
        f(j,0,m){
            cin >> a[i][j];
        }
    }
    int ans=0;
    int idx=-1,idy=-1;
    int highbit=0;
    f(i,0,n){
        f(j,0,m){
            int p=a[i][j];
            int bit=0;
            while(p!=0){
                p/=2;
                bit++;
            }
            if(highbit<bit){
                highbit=bit;
                idx=i;
                idy=j;
            }
            else if(highbit==bit){
                if(a[i][j]>a[idx][idy]){
                    idx=i;
                    idy=j;
                }
            }
        }
    }
    // cout << highbit << endl;
    // cout << a[idx][idy] << endl;
    // cout << endl;

    vector<pair<int,int>>vp;
    f(i,0,n){
        f(j,0,m){
            if((1<<(highbit-1))==a[i][j]){
                vp.pb({i,j});
            }
        }
    }
    p=0;
    f(i,0,n){
        f(j,0,m){
            if(i==idx || j==idy){
                continue;
            }
            p+=(a[i][j]^a[idx][idy]);
        }
    }
    ans=max(ans,p);
    
    for(auto k: vp){
        p=0;
        f(i,0,n){
            f(j,0,m){
                if(k.first==i || k.second==j){
                    continue;
                }
                p+=(a[i][j]^a[k.first][k.second]);
            }
            ans=max(ans,p);
        }
    }
    
    cout << ans << endl;



}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        solve();
    }
}