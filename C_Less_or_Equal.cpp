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

int digit(int n){
    int c=0;
    while(n!=0){
        c+=1;
        n/=10;
    }
    return c;
}

signed main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t=1;
//   cin >> t;
  while (t--){
    int n, p, k, m=0, q, x, y;
    cin >> n >> k;
    int a[n];
    inputarray(a,n);
    arraysort(a);
    vector<int>v;
    int ans;
	if (k == 0){
		ans = a[0] - 1;
	}
    else{
		ans = a[k - 1];
	}
	int cnt = 0;
	f(i,0,n){
		if (a[i] <= ans){
            cnt++;
        }
    }
	if (cnt != k || !(1 <= ans && ans <= 1000 * 1000 * 1000)) {
		cout << -1 << endl;
        continue;
	}
    cout << ans << endl;
    }
}

