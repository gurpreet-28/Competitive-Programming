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

const int MAXN = 2e5 + 10, MOD = 1e9 + 7;
char c[MAXN];
string s;
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n;
		cin >> n;
		s = "";
		for (int i = 0; i < n; i++)
			cin >> c[i];
		if (n == 1)
			cout << c[0] << c[0] << '\n';
		else{
			if (c[0] == c[1]){
				cout << c[0] << c[0] << '\n';
				continue; 
			}
			s += c[0];
			for (int i = 1; i < n; i++){
				if (c[i] <= c[i - 1])
					s += c[i];
				else
					break;
			}
			cout << s;
			reverse(s.begin(), s.end());
			cout << s << '\n';
		}
    }
}