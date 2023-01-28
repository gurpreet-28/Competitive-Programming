#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i = a; i < b; i++)
#define pb                push_back
#define all(a)            a.begin(), a.end()
#define arraysort(a)      sort(a, a + n)
#define endl              "\n"
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){     
    int n, p=0, q=0, d, r, j, x=0, y=0;
    cin >> n >> d;
    int a[n];
    inputarray(a,n);
    unordered_map<int,int>f;
    f(i,0,n){
        f[a[i]]++;
    }

    p=*max_element(a,a+n);
    vector<pair<int,int>>v;
    f(i,1,p+10){
        v.pb(make_pair(i,f[i]));
    }

    f(i,0,v.size()-1){
        if(v[i].second>0){
            x=(v[i].second/(v[i].first+1))*(v[i].first+1);
            y=v[i].second-x;
            x=v[i].second/(v[i].first+1);
            v[i+1].second+=x;
            v[i].second=y;
        }
    }
    f(i,0,v.size()){
        if(v[i].first<d && v[i].second>0){
            q=1;
            break;
        }
        if(v[i].first>=d && v[i].second>0 && q==0){
            cout << "Yes" << endl;
            break;
        }
    }
    if(q==1){
        cout << "No" << endl;
    }

    }
}


