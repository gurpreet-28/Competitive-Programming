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

bool check(int mid,vector<vector<int>>&pref ,int k, vector<vector<int>>&a){
    int n=pref.size();
    int m=pref[0].size();
    int q=0;
    f(i,0,n){
        f(j,0,m){
            if(a[i][j]==0){
                continue;
            }
            int x1,x2,y1,y2;
            x1=max(0LL,i-mid);
            x2=min(n-1,i+mid);
            y1=max(0LL,j-mid);
            y2=min(m-1,j+mid);
            
            int res = pref[x2][y2];

            if (x1 > 0)
                res = res - pref[x1-1][y2];
        
            if (y1 > 0)
                res = res - pref[x2][y1-1];
        
            if (x1 > 0 && y1 > 0)
                res = res + pref[x1-1][y1-1];
        
            if(res>=k+1){
                return true;
            }
        }
    }

    return false;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        int n, m, p=0, q=0, k;
        cin >> n >> m >> k;
        vector<vector<int>>a(n,vector<int>(m));
        f(i,0,n){
            f(j,0,m){
                cin >> a[i][j];
            }
        }    
        vector<vector<int>>pref(n,vector<int>(m));
        pref[0][0] = a[0][0];
 
        for (int i = 1; i < m; i++)
            pref[0][i] = pref[0][i - 1] + a[0][i];
        for (int i = 1; i < n; i++)
            pref[i][0] = pref[i - 1][0] + a[i][0];
 
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++)
                pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + a[i][j];
        }


        // f(i,0,n){
        //     f(j,0,m){
        //         cout << setw(3) << left << pref[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        int l=0,r=1e6;
        int ans=-1;
        while(l<=r){
            int m=(l+r)/2;
            if(check(m,pref,k,a)){
                r=m-1;
                ans=m;
            }
            else{
                l=m+1;
            }
        }
        cout << ans << endl;
    }
}