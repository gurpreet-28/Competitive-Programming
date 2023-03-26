#include <bits/stdc++.h>
// #define int               long long
#define f(i,a,b)          for(int i=a;i<b;i++)
#define mp                make_pair
#define pb                push_back
#define all(a)            a.begin(),a.end()
#define arraysort(a)      sort(a,a+n)
#define endl              "\n"    
#define inputarray(a, n)  f(i, 0, n) { cin >> a[i]; }
#define printarray(a,n)   f(i, 0, n) { cout << a[i] << " "; } cout<<endl;
using namespace std;

bool func(int a[],int mid, int n, int m,vector<int>&mp){
    long long int left=0,time=0;
    f(i,1,n+1){
        left+=max(0,mp[i]-mid);
        time+=(max(0,mid-mp[i]))/2;
    }
    if(time>=left){
        return true;
    }
    return false;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin >> t;
    while (t--){
        int n, m, p=0, q;
        int ans;
        cin >> n >> m;
        int a[m];
        inputarray(a,m);
        int l=0,r=1e9;
        // map<int,int>mp;
        // int mp[m+1]={0};
        vector<int>mp(m+1,0);
        f(i,0,m){
            mp[a[i]]++;
        }
        while(l<=r){
            int mid=l+(r-l)/2;
            if(func(a,mid,n,m,mp)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout << ans << endl;
    }
}