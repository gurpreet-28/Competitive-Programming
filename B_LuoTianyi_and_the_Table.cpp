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

int ans1(vector<vector<int>>&a,int n,int m){
    int mini[n][m];
    int maxi[n][m];
    f(i,0,n){
        f(j,0,m){
            mini[i][j]=0;
            maxi[i][j]=0;
        }
    }

    int mi=INT_MAX;
    f(i,0,m){
        mi=min(mi,a[0][i]);
        mini[0][i]=mi;
    }

    int mx=INT_MIN;
    f(i,0,n){
        mx=max(mx,a[i][0]);
        maxi[i][0]=mx;
    }

    mi=INT_MAX;
    f(i,0,n){
        mi=min(mi,a[i][0]);
        mini[i][0]=mi;
    }

    mx=INT_MIN;
    f(i,0,m){
        mx=max(mx,a[0][i]);
        maxi[0][i]=mx;
    }

    // f(i,0,n){
    //     f(j,0,m){
    //         cout << mini[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    f(i,1,n){
        f(j,1,m){
            mini[i][j]=min({a[i][j],mini[i-1][j],mini[i][j-1]});
            maxi[i][j]=max({a[i][j],maxi[i-1][j],maxi[i][j-1]});
        }
    }
    int ans=0;
    f(i,0,n){
        f(j,0,m){
            ans+=(maxi[i][j]-mini[i][j]);    
        }
    }
    return ans;
}


void solve(){
    int n, m, p=0, q;
    cin >> n >> m;
    if(n<m){
        swap(n,m);
    }
    p=n*m;
    int b[p];
    inputarray(b,p);
    vector<vector<int>>a1(n,vector<int>(m));
    vector<vector<int>>a2(n,vector<int>(m));
    p=0;
    f(i,0,n){
        f(j,0,m){
            a1[i][j]=b[p++];
        }
    }
    a2=a1;
    sort(b,b+p);
    a1[0][0]=b[0];
    a1[0][1]=b[p-2];
    a1[1][0]=b[p-1];

    a2[0][0]=b[p-1];
    a2[0][1]=b[1];
    a2[1][0]=b[0];
    int z=1;
    f(i,0,n){
        f(j,0,m){
            if(i==0 and (j==1 or j==0)){
                continue;
            }
            if(j==0 and i==1){
                continue;
            }
            a1[i][j]=b[z++];
        }
    }
    z=2;
    f(i,0,n){
        f(j,0,m){
            if(i==0 and (j==1 or j==0)){
                continue;
            }
            if(j==0 and i==1){
                continue;
            }
            a2[i][j]=b[z++];
        }
    }
    
    // f(i,0,n){
    //     f(j,0,m){
    //         cout << a1[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // cout << endl;

    // f(i,0,n){
    //     f(j,0,m){
    //         cout << a2[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    cout << max(ans1(a1,n,m),ans1(a2,n,m)) << endl;

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