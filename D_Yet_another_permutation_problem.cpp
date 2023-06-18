#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define rall(a)           a.rbegin(),a.rend()
#define all(a)            a.begin(),a.end()
#define arraysort(a,n)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

int power(int a, int b, int p){
    if(a==0)
        return 0;
    int res=1;
    a%=p;
    while(b>0){
        if(b&1)
        res=(1ll*res*a)%p;
        b>>=1;
        a=(1ll*a*a)%p;
    }
    return res;
}

int lcm(int a, int b){
    if(a==0 || b==0)
        return 0;
    return (a*b)/__gcd(a,b);
}

int solve(vector<int>&a, vector<int>&b, int n){
    int ans=0;
    map<int,int>mp;
    int i=0,j=0;
    while(i<n and j<n){
        if(a[i]==b[j]){
            mp[a[i]]++;
            i++;
            while(j<n and mp[b[j]]==1){
                j++;
            }
        }
        else{
            // cout << a[i] << " ";
            ans++;
            mp[a[i]]++;
            i++;
        }
    }
    // cout << endl;
    return 2*ans;
}

void solve(){
    int n, m, p=0, q;
    cin >> n;
    vector<int>a(n);    
    vector<int>b(n);
    inputarray(a,n);    
    inputarray(b,n);
    cout << solve(a,b,n) << endl;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    while (testcases--){
        solve();
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// void solve()
// {
// 	int n;
// 	cin>>n;
// 	vector<int> a(n+1),b(n+1),mp(n+1),f(n+1);
// 	for(int i=1;i<=n;i++){scanf("%d",&a[i]);mp[a[i]]=i;}
// 	for(int i=1;i<=n;i++){scanf("%d",&b[i]);f[i]=0x7fffffff;}
// 	int len=0;
// 	f[0]=0;
// 	for(int i=1;i<=n;i++)
// 	{
// 		int l=0,r=len,mid;
// 		if(mp[b[i]]>f[len])f[++len]=mp[b[i]];
// 		else 
// 		{
// 		while(l<r)
// 		{	
// 		    mid=(l+r)/2;
// 		    if(f[mid]>mp[b[i]])r=mid;
// 			else l=mid+1; 
// 		}
// 		f[l]=min(mp[b[i]],f[l]);
//      	}
//     }
//     cout << 2*(n-len) << endl;
// }
// int main() {
//    int T;cin >> T;
//    while(T--) solve();
// }