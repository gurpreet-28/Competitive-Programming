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

bool my_compare(string a, string b)
{
    if (a.compare(0, b.size(), b) == 0
        || b.compare(0, a.size(), a) == 0)
 
        return a.size() > b.size();
    else
        return a < b;
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t,t1;
  cin >> t1;
  t=1;
  while (t<=t1){
    int n, p, x, y, d ,sum=0;
    cin >> d >> n >> x;
    vector<int>q(n);
    vector<int>l(n);
    vector<int>v(n);
    vector<pair<int,int>>mp;
    f(i,0,n){
        cin >> q[i] >> l[i] >> v[i];
    }
    f(i,0,n){
        mp.push_back(make_pair(l[i],v[i]));
    }
    sort(mp.rbegin(),mp.rend());
    int j=0;
    f(i,0,n){
        if(mp[i].first+j<d){
            sum+=mp[i].second;
            j++;
        }
    }
    cout << "Case #" << t << ": " << sum << endl;
    t++;
  }
}
