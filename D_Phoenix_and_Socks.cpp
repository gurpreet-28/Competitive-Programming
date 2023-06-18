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

int solve1(int l, int r, vector<int>&left, vector<int>&right, int n){
    int p=0;
    map<int,int>mp;
    f(i,0,r){
        mp[right[i]]++;
    }
    vector<int>rem;
    f(i,0,l){
        if(mp[left[i]]==0){
            rem.pb(left[i]);
        }
        else{
            mp[left[i]]--;
        }
    }
    int ans=0;
    ans+=rem.size();
    p=rem.size();
    for(auto i: mp){
        if(p==0){
            break;
        }
        if((i.second)%2==0){
            if(p%2==0){
                mp[i.first]-=min(i.second,p);
                p-=min(i.second,p);
            }
            else{
                p--;
                mp[i.first]-=min(i.second,p);
                p-=min(i.second,p);
                p++;
            }
        }
        else{
            if(p%2==1){
                mp[i.first]-=min(i.second,p);
                p-=min(i.second,p);
            }
            else{
                p--;
                mp[i.first]-=min(i.second,p);
                p-=min(i.second,p);
                p++;
            }
        }
    }
    // cout << ans << endl;
    p=0;
    for(auto i: mp){
        ans+=(i.second/2);
        mp[i.first]%=2;
        if(mp[i.first]==1){
            p++;
        }
    }
    return (ans+p);
}


void solve(){
    int n, m, p=0,l,r, q;
    cin >> n >> l >> r;
    vector<int>left(l);
    vector<int>right(r);
    f(i,0,l){
        cin >> left[i];
    }    
    f(i,0,r){
        cin >> right[i];
    }
    int ans=solve1(l,r,left,right,n);
    if(l>r){
        swap(l,r);
        swap(left,right);
    }
    ans=min(ans,solve1(l,r,left,right,n));
    cout << ans << endl;

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