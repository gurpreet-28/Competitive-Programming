#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " ";}cout<<endl;
using namespace std;

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n,p=0,q=0;
        cin >> n;
        int a[n];
        inputarray(a,n);
        int ma=0;
        map<int,int>m;
        f(i,0,n){
            m[a[i]]++;
            ma=max(m[a[i]],ma);
        }
        f(i,1,n+1){
            if(m[i]==0){
                p++;
            }
            if(m[i]==2){
                q++;
            }
            if(p<q){
                ma=3;
                break;
            }
        }
        if(m[1]>1 || ma>2){
            cout << "NO" << endl;
        }
        else{
            vector<int>mis;
            f(i,1,n+1){
                if(m[i]==0){
                    mis.pb(i);
                }
            }
            vector<pair<int,int>>v;
            f(i,0,n){
                v.pb({a[i],i});
            }
            sort(all(v));
            int ans1[n]={0},ans2[n]={0};
            for(int i=0;i<n;i++){
                if(m[v[i].first]==1){
                    ans1[v[i].second]=v[i].first;
                    ans2[v[i].second]=v[i].first;
                }
            }

            int j=mis.size()-1;
            for(int i=n-1;i>=0;i--){
                if(m[v[i].first]==2){
                    ans1[v[i].second]=v[i].first;
                    ans2[v[i-1].second]=v[i].first;
                    ans1[v[i-1].second]=mis[j];
                    ans2[v[i].second]=mis[j];
                    i--;
                    j--;
                }
            }
            cout << "YES" << endl;
            printarray(ans1,n);
            printarray(ans2,n);
        }
    }
}