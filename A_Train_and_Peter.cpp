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

vector<pair<int,char>>Substring(string s)
{
    char c,p;
    int ans = 1, temp = 1, q;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            c=s[i];
            ++temp;
        }
        else {
            if(temp>ans){
                ans=temp;
                p=c;
                q=i-temp;
            }
            temp = 1;
        }
    }
    if(temp>ans){
        ans=temp;
        p=c;
    }
    vector<pair<int,char>>v;
    v.pb({ans,p});
    return v;
}
 
signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
//   cin >> t;
  while (t--){
    int n,m, p=0, q, r, j, x, y;
    string s,a,b;
    cin >> s >> a >> b;
	size_t found1 = s.find(a);
	size_t found2 = s.find(a,found1+1);
	size_t found3 = s.find(b);
	size_t found4 = s.find(b,found3+1);
    if (found1 == string::npos || found3 == string::npos){
        cout << "fantasy" << endl;
        continue;
    }
    if (found2 == string::npos && found4 == string::npos){
        if(found1<found3){
            cout << "forward" << endl;
        }
        else{
            cout << "backward" << endl;
        }
        continue;
    }
    if(found2 != string::npos && found4 == string::npos){
        if(found2 < found3){
            cout << "forward" << endl;
        }
        else if(found3<found1){
            cout << "backward" << endl;
        }
        else{
            cout << "both" << endl;
        }
        continue;
    }
    if(found2 == string::npos && found4 != string::npos){
        if(found1 < found2){
            cout << "forward" << endl;
        }
        else if(found4<found1){
            cout << "backward" << endl;
        }
        else{
            cout << "both" << endl;
        }
        continue;
    }
    if(found2<found3){
        cout << "forward" << endl;
        continue;
    }
    if(found4<found1){
        cout << "backward" << endl;
        continue;
    }        


    }
}