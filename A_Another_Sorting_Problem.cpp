
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

bool comp(pair<string,int> &a, pair<string,int> &b)
{
    int id = 0;
    for(int i=0; i<a.first.length(); i++)
    {
        if(a.first[i]!=b.first[i])
        {
            id = i;
            break;
        }
    }
    if(id%2==0)
    {
        return a.first[id] < b.first[id];
    }
    else{
        return a.first[id] > b.first[id];
    }
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, p = 0, ans = 0, i = 0,  m , q, r=1, po=1;
        cin >> n >> m;
        vector<pair<string,int>>v;
        f(i,0,n){
            string str;
            cin >> str;
            v.pb(make_pair(str,i+1));
        }
        sort(v.begin(),v.end(),comp);
        f(i,0,n){
            cout << v[i].second << " ";
        }
        cout << endl;
    }
}