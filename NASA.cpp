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

string bin(int x){
    string ans="";
    while(x!=0){
        ans+=to_string(x%2);
        x/=2;
    }
    reverse(all(ans));
    return ans;
}

bool isPalin(int x){
    string s=to_string(x);
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void solve(set<int>&st){
    int n, m, p=0, q;
    cin >> n;
    int a[n];
    inputarray(a,n);
    unordered_map<int,int>mp;
    f(i,0,n){
        mp[a[i]]++;
    }
    int ans=0;
    sort(a,a+n);
    for(auto ele: st){
        f(i,0,n){
            int t=(a[i]^ele);
            ans+=mp[t];
        }
    }
    cout << ((ans-n)/2) + n << endl;
}

signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testcases=1;
    cin >> testcases;
    set<int>st;
    f(i,0,35000){
        if(isPalin(i)){
            st.insert(i);
        }
    }
    while (testcases--){
        solve(st);
    }
}