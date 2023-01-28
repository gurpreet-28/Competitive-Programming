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
    int n, p, x, y;
    cin >> n;
    string s[n];
    string w[n];
    int r[n],q[n],d[n],u[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
        cin >> d[i];
        cin >> u[i];
        w[i]=s[i];
        r[i]=d[i];
        q[i]=u[i];
    }
    string a="";
    unordered_map<string,int>m1;
    f(i,0,n){
        a=a+w[i]+'-'+to_string(r[i])+'-'+to_string(q[i]);
        m1[a]++;
        a="";
    }
    sort(s,s+n,my_compare);
    arraysort(d);
    arraysort(u);
    int count=0;
    a="";
    f(i,0,n){
        a=a+s[i]+'-'+to_string(d[i])+'-'+to_string(u[i]);
        if(m1[a]>0){
            count++;
            // m1[a]--;
        }
        a="";
    }
    cout << "Case #" << t << ": " << count << endl;
    t++;
  }
}
