
// #include <bits/stdc++.h>
// #define int               long long
// #define f(i,a,b)          for(int i = a; i < b; i++)
// #define pb                push_back
// #define all(a)            a.begin(), a.end()
// #define arraysort(a)      sort(a, a + n)
// #define endl              "\n"
// #define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
// #define printarray(a, n)  f(i, 0, n) { cout << a[i] << " "; }cout << endl;
// using namespace std;

// signed main(){
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(NULL);
//   int t=1;
//   cin >> t;
//   while (t--){
//     int n,m;
//     cin >> n >> m;

//     }
// }





#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long ull;
unsigned long long ll;
const int maxn=105;
int a[maxn];
ull n;
int k;

void solve(){
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%llu %d",&n,&k);
		ull tmp=n;
		memset(a,0,sizeof(a));
		for(int i=0;i<20;i++){
			a[i]=n%10;n/=10;
		}
		int sum=0;
		for(int i=0;i<20;i++){
			if(a[i]==0)	continue;
			int sum=0;
			for(int j=0;j<20;j++)	sum+=a[j];
			if(sum<=k)	break;
			a[i]=0;a[i+1]++;
			for(int j=i+1;j<20;j++){
				if(a[j]>=10){
					a[j]-=10;a[j+1]++;
				}
			}
		}
		ull res=0,base=1;
		for(int i=0;i<20;i++){
			res=res+(ull)a[i]*base;base*=10;
		}
		printf("%llu\n",res-tmp);
	}
}
int main(){
	solve();
	return 0;
} 