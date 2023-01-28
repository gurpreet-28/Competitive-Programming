	   					 		  	   				  			
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

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    { 
    int n, p, x, k, o=0;
    cin >> n >> k;
    string s;
    cin >> s;
    f(i,0,n){
        if(s[i]=='1'){
            o++;
        }
    }
    if(o==n){
        cout << 0 << endl;
        continue;
    }
    if(o==0){
        cout << 1 << endl;
        continue;
    }
    vector<pair<int,int>>v;
    char c=s[0];
    p=0;
    x=0;
    f(i,0,n+1){
        if(s[i]==c){
            p++;
        }
        else{
            v.push_back(make_pair(s[i-1]-'0',p));
            p=1;
            c=s[i];
        }
    }
    if(c==s[n-1])
        v.push_back(make_pair(s[n-1]-'0',p));
    
    n=v.size();
    int sum=0,i=0,j=0,ans=n;
    f(j,0,n){
        sum+=v[j].second;
        for(i;sum>=k;i++){
            if(v[j].first==0){
                ans=min(ans,j-i+1);
            }
            else{
                ans=min(ans,j-i);
            }
            sum-=v[i].second;
        }
    }
    cout << ans << endl;


    }
}