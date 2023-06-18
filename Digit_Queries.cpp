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


int check(int n){
    string num = to_string(n);
    int ans=0;
    for(int i=1;i<num.length();i++){
        ans+=i*pow(10,i-1)*9;
    }
    ans+=((n-pow(10,num.length()-1))*num.length());
    return ans;
}

int findNthDigit(int n) {
    int l=1,r=1e9;
    int ans=0;
    if(n<10){
        return n;
    }
    while(l<=r){
        int mid=l+(r-l)/2;
        if(check(mid)>=n){
            ans=mid-1;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    int p = n-check(ans);
    string num = to_string(ans);
    p--;
    return (num[p]-'0');
}

void solve(){
    int n, m, p=0, q;
    cin >> n;
    cout << findNthDigit(n) << endl; 
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