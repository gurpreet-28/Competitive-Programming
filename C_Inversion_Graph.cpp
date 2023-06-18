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

void solve(){
    int n, m, p=0, q;
    cin >> n;
    int a[n];
    inputarray(a,n);
    priority_queue<int,vector<int>,greater<int>>st;
    f(i,0,n){
        st.push(i+1);
    }
    vector<int>mark(n+1,0);
    map<int,int>mp;
    mp[1]=1;
    p=1;
    f(i,0,n){
        if(mark[a[i]]==0){
            mark[a[i]]=p;
        }
        else{
            mp[p]=mark[a[i]];
        }
        while(!st.empty() and st.top()<a[i]){
            int j=st.top();
            // cout << j << " ";
            st.pop();
            if(j<a[i]){
                if(mark[j]==0){
                    mark[j]=p;
                }
                else{
                    mp[p]=mark[j];
                }
            }
        }
        // cout << endl;
        p++;
    }
    f(i,1,n+1){
        mark[i]=mp[i];
    }
    printarray(mark,n+1);


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