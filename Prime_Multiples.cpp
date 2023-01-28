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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    int a[k];
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<(1<<k);i++)
    {
        vector<int> v;
        for(int j=0;j<k;j++)
        {
            if((i&(1<<j))!=0)
            {
                v.pb(a[j]);
            }
        }
        int prod=1;
        for(int j=0;j<v.size();j++)
        {
            if(prod>n/v[j])
            {
                prod=n+1;
                break;
            }
            prod*=v[j];
        }
        sort(all(v));
        printarray(v,v.size());
        if(v.size()%2==0) ans-=n/prod;
        else ans+=n/prod;
    }
    ans+=n;
    cout<<ans;
}