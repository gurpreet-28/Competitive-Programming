#include <bits/stdc++.h>
#define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

#define MAXN   100001
int spf[MAXN];
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
        spf[i] = i;
 
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

void getFactorization(int x,unordered_map<int,int>&mp,int& ans)
{
    while (x != 1)
    {
        mp[spf[x]]++;
        ans=max(ans,mp[spf[x]]);

        int temp=spf[x];
        while(temp==spf[x])
            x = x / spf[x];
    }
}


signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    // cin >> t;
    sieve();
    while (t--){
        int n, m, p=0, q;
        cin >> n;
        int a[n];
        inputarray(a,n);
        unordered_map<int,int>mp;
        arraysort(a);
        if(n==1 || a[n-1]==1){
            cout << 1 << endl;
            continue;
        }
        int ans=0;
        f(i,0,n){
            getFactorization(a[i],mp,ans);
        }
        cout << ans << endl;
    }
}