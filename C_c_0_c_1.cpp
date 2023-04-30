#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int             long long
#define all(a)          a.begin(),a.end()
#define endl            "\n"
#define fill(a,b) memset(a, b, sizeof(a))
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;
int max_sum_subarray(int arr[],int L, int R,int n){
    int pre[n] = { 0 };
 
    pre[0] = arr[0];
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + arr[i];
    }
    multiset<int> s1;
 
    // maintain 0 for initial
    // values of i upto R
    // Once i = R, then
    // we need to erase that 0 from
    // our multiset as our first
    // index of subarray
    // cannot be 0 anymore.
    s1.insert(0);
    int ans = INT_MIN;
 
    ans = max(ans, pre[L - 1]);
 
    // we maintain flag to
    // counter if that initial
    // 0 was erased from set or not.
    int flag = 0;
 
    for (int i = L; i < n; i++) {
 
        // erase 0 from multiset once i=b
        if (i - R >= 0) {
            if (flag == 0) {
 
                auto it = s1.find(0);
                s1.erase(it);
                flag = 1;
            }
        }
        // insert pre[i-L]
        if (i - L >= 0)
            s1.insert(pre[i - L]);
 
        // find minimum value in multiset.
        ans = max(ans,
                  pre[i] - *s1.begin());
 
        // erase pre[i-R]
        if (i - R >= 0) {
            auto it = s1.find(pre[i - R]);
            s1.erase(it);
        }
    }
    // cout << ans << endl;
    return ans;
}
                
signed main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
while(t--){
    int i,j,x=0,y=0,p=0,n,q=-1,u=0,v=0,k,c=0,m;
    int x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    int a[n],a1[n],a2[n];
    int b[n],b1[n],b2[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0) a1[i]=-1;
        else a1[i]=1;
        if(a[i]==0) a2[i]=1;
        else a2[i]=-1;
    }
    for(i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==0) b1[i]=-1;
        else b1[i]=1;
        if(b[i]==0) b2[i]=1;
        else b2[i]=-1;
    }
    int maxa=max_sum_subarray(a1,x1,y1,n);
    int mina=-max_sum_subarray(a2,x1,y1,n);
    int maxb=max_sum_subarray(b1,x2,y2,n);
    int minb=-max_sum_subarray(b2,x2,y2,n);
    
    if(x1==y1&&x2<y2){
        c=0;
        for(i=0;i<y1;i++){
            c+=a1[i];
        }
        if(minb<=-c&&-c<=maxb){
            cout<<"YES"<<endl;
            continue;
        }
        for(i=y1;i<n;i++){
            c-=a1[i-y1];
            c+=a1[i];
            if(minb<=-c&&-c<=maxb){
                cout<<"YES"<<endl;
                continue;
            }
        }
        cout<<"NO"<<endl;
    }
    else if(x1<y1&&x2==y2){
        c=0;
        for(i=0;i<y2;i++){
            c+=b1[i];
        }
        if(mina<=-c&&-c<=maxa){
            cout<<"YES"<<endl;
            continue;
        }
        for(i=y2;i<n;i++){
            c-=b1[i-y2];
            c+=b1[i];
            if(mina<=-c&&-c<=maxa){
                cout<<"YES"<<endl;
                continue;
            }
        }
        cout<<"NO"<<endl;
    }
    else if(x1==y1&&x2==y2){
        map<int,int>m1;
        c=0;
        for(i=0;i<y1;i++){
            c+=a1[i];
        }
        m1[-c]=1;
        for(i=y1;i<n;i++){
            c-=a1[i-y1];
            c+=a1[i];
            m1[-c]=1;
        }
        c=0;
        for(i=0;i<y2;i++){
            c+=b1[i];
        }
        if(m1[c]==1){
            cout<<"YES"<<endl;
            continue;
        }
        for(i=y2;i<n;i++){
            c-=b1[i-y2];
            c+=b1[i];
            if(m1[c]==1){
                cout<<"YES"<<endl;
                continue;
            }
        }
        cout<<"NO"<<endl;
    }
    else{
        if((maxa+maxb>=0)&&(mina+minb<=0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    }
}