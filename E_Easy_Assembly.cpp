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
    cin >> n;
    vector<vector<int>>v1;
    f(i,0,n){
        int x;
        cin >> x;
        vector<int>temp;
        f(j,0,x){
            int y;
            cin >> y;
            temp.pb(y);
        }
        v1.pb(temp);
    }
    vector<vector<int>>v;
    f(i,0,n){
        vector<int>temp;
        f(j,0,v1[i].size()-1){
            if(v1[i][j]<=v1[i][j+1]){
                temp.pb(v1[i][j]);
            }
            else{
                temp.pb(v1[i][j]);
                v.pb(temp);
                temp.clear();
            }
        }
        temp.pb(v1[i][v1[i].size()-1]);
        v.pb(temp);
    }    
    sort(all(v));
    int splits=v.size()-n,combine=0;
    int mx=0;
    for(int i=1;i<v.size();i++){
        if(v[i-1][0]>=mx){
            mx=max(v[i-1][v[i-1].size()-1],mx);
            combine++;
        }
        else{
            int j=0,k=0;
            while(j<v[i-1].size() and k<v[i].size()){
                int t=0;
                while(k<v[i].size() and v[i-1][j]>=v[i][k]){
                    k++;
                    t=1;
                }
                if(t=1){
                    combine++;
                    splits++;
                }
                if(v[i-1][j]<v[i][k]){
                    j++;
                }
            }
            mx=max(v[i][v[i].size()-1],mx);
        }
    }
    cout << splits << " " << combine << endl;



}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    // cin >> testcases;
    while (testcases--){
        solve();
    }
}